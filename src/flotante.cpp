#include "flotante.hpp"

using namespace std;

Flotante::Flotante(void):dato_(0){}

Flotante::Flotante(float dato):dato_(dato){}

Flotante::~Flotante(void){}

Flotante Flotante::operator+(const Flotante a){
  return dato_ + a.dato_;
}

Flotante Flotante::operator-(const Flotante a){
  return dato_ - a.dato_;
}

Flotante Flotante::operator*(const Flotante a){
  return dato_ * a.dato_;
}

Flotante Flotante::operator/(const Flotante a){
  try {
    if (a.dato_ == 0.0) throw "El valor del denominador es 0.0; error en la division";
  }
  catch (char const* x) {
         cout << x << endl;
  }
  return dato_ / a.dato_;
}

Flotante Flotante::operator =(const Flotante a){
  dato_ = a.dato_;

  return dato_;
}

bool Flotante::operator ==(const Flotante a){
  return dato_ == a.dato_;
}

bool Flotante::operator !=(const Flotante a){
  return dato_ != a.dato_;
}

bool Flotante::operator <(const Flotante a){
  return dato_ < a.dato_;
}

bool Flotante::operator >(const Flotante a){
  return dato_ > a.dato_;
}

bool Flotante::operator <=(const Flotante a){
  return dato_ <= a.dato_;
}

bool Flotante::operator >=(const Flotante a){
  return dato_ >= a.dato_;
}

void Flotante::to_stream(ostream& os){
  os << dato_;
}

void Flotante::from_stream(istream& is){
  cout << "Introduzca el numero flotante que desee: ";
  is >> dato_;
}

float Flotante::get_dato(void){
  return dato_;
}
