#include "natural.hpp"
#include <stdexcept>

using namespace std;

Natural::Natural(void):dato_(0){}

Natural::Natural(int dato){
  try {
    if (dato < 0) throw std::invalid_argument("Un numero natural no puede ser negativo.");
  }

  catch (const std::invalid_argument& e) { // captura todas las excepciones de la jerarquía
    std::cout << "Error: " << e.what() << std:: endl;
  }

  dato_ = dato;
}

Natural::~Natural(void){}

Natural Natural::operator+(const Natural a){
  return dato_ + a.dato_;
}

Natural Natural::operator-(const Natural a){
  assert(a.dato_ < dato_); // Si es verdadero no pasa nada

  return dato_ - a.dato_;
}

Natural Natural::operator*(const Natural a){
  return dato_ * a.dato_;
}

Natural Natural::operator/(const Natural a){
  try {
    if (a.dato_ == 0) throw "El valor del denominador es 0; error en la division";
  }
  catch (char const* x) {
         cout << x << endl;
  }
  return dato_ / a.dato_;
}


Natural Natural::operator =(const Natural a){
  dato_ = a.dato_;

  return dato_;
}

bool Natural::operator ==(const Natural a){
  return dato_ == a.dato_;
}

bool Natural::operator !=(const Natural a){
  return dato_ != a.dato_;
}

bool Natural::operator <(const Natural a){
  return dato_ < a.dato_;
}

bool Natural::operator >(const Natural a){
  return dato_ > a.dato_;
}

bool Natural::operator <=(const Natural a){
  return dato_ <= a.dato_;
}

bool Natural::operator >=(const Natural a){
  return dato_ >= a.dato_;
}

void Natural::to_stream(ostream& os){
  os << dato_;
}

void Natural::from_stream(istream& is){
  cout << "Introduzca el numero natural que desee: ";
  is >> dato_;
}

unsigned int Natural::get_dato(void){
  return dato_;
}
