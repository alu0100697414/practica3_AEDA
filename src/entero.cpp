#include "entero.hpp"

using namespace std;

Entero::Entero(void):dato_(0){}

Entero::Entero(int dato):dato_(dato){}

Entero::~Entero(void){}

Entero Entero::operator+(const Entero a){
  return dato_ + a.dato_;
}

Entero Entero::operator-(const Entero a){
  return dato_ - a.dato_;
}

Entero Entero::operator*(const Entero a){
  return dato_ * a.dato_;
}

Entero Entero::operator/(const Entero a){
  try {
    if (a.dato_ == 0) throw "El valor del denominador es 0; error en la division";
  }
  catch (char const* x) {
         cout << x << endl;
  }
  return dato_ / a.dato_;
}

Entero Entero::operator =(const Entero a){
  dato_ = a.dato_;

  return dato_;
}

bool Entero::operator ==(const Entero a){
  return dato_ == a.dato_;
}

bool Entero::operator !=(const Entero a){
  return dato_ != a.dato_;
}

bool Entero::operator <(const Entero a){
  return dato_ < a.dato_;
}

bool Entero::operator >(const Entero a){
  return dato_ > a.dato_;
}

bool Entero::operator <=(const Entero a){
  return dato_ <= a.dato_;
}

bool Entero::operator >=(const Entero a){
  return dato_ >= a.dato_;
}

void Entero::to_stream(ostream& os){
  os << dato_;
}

void Entero::from_stream(istream& is){
  cout << "Introduzca el numero entero que desee: ";
  is >> dato_;
}

int Entero::get_dato(void){
  return dato_;
}
