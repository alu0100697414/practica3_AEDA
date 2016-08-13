#include <cmath>
#include <stdexcept>

#include "racional.hpp"

using namespace std;

Racional::Racional(void):num_(0),den_(0){}

Racional::Racional(int num, unsigned int den):num_(num),den_(den){
  try {
    if (den == 0) throw "El valor del denominador es 0; tendras errores si realizas operaciones";
  }
  catch (char const* x) {
    cerr << x << endl;
  }
}

Racional::~Racional(void){}

Racional Racional::operator+(const Racional a){
  if(den_==a.den_)
    return Racional(num_+a.num_,den_);

  else {
    Racional res;

    res.num_=num_*a.den_+a.num_*den_;
    res.den_=den_*a.den_;

    reducir(res.num_,res.den_);

    return Racional(res.num_, res.den_);
  }
}

Racional Racional::operator-(const Racional a){
  if(den_==a.den_)
    return Racional(num_-a.num_,den_);

  else {
    Racional res;

    res.num_=num_*a.den_-a.num_*den_;
    res.den_=den_*a.den_;

    reducir(res.num_,res.den_);

    return Racional(res.num_, res.den_);
  }
}

Racional Racional::operator*(const Racional a){
    Racional res;

    res.num_=num_*a.num_;
    res.den_=den_*a.den_;

    reducir(res.num_,res.den_);

    return Racional(res.num_, res.den_);
}

Racional Racional::operator/(const Racional a){
    Racional res;

    res.num_=num_*a.den_;
    res.den_=den_*a.num_;

    reducir(res.num_,res.den_);

    return Racional(res.num_, res.den_);
}

Racional Racional::operator =(const Racional a){
  num_ = a.num_;
  den_ = a.den_;

  return *this;
}

bool Racional::operator ==(Racional a){
  Racional aux;

  aux.num_=num_;
  aux.den_=den_;

  reducir(aux.num_,aux.den_);
  reducir(a.num_,a.den_);

  return (aux.num_==a.num_ && aux.den_==a.den_);
}

bool Racional::operator !=(Racional a){
  Racional aux;

  aux.num_=num_;
  aux.den_=den_;

  reducir(aux.num_,aux.den_);
  reducir(a.num_,a.den_);

  return (aux.num_!=a.num_ || aux.den_!=a.den_);
}

bool Racional::operator <(Racional a){
  if(den_==a.den_)
    return (num_<a.num_);

  else if (num_==a.num_)
    return (den_>a.den_);

  else {
    num_=num_*a.den_;
    den_=den_*a.den_;

    a.num_=a.num_*den_;
    a.den_=a.den_*den_;

    return (num_<a.num_);
  }
}

bool Racional::operator >(Racional a){
  if(den_==a.den_)
    return (num_>a.num_);

  else if (num_==a.num_)
    return (den_<a.den_);

  else {
    num_=num_*a.den_;
    den_=den_*a.den_;

    a.num_=a.num_*den_;
    a.den_=a.den_*den_;

    return (num_>a.num_);
  }
}

bool Racional::operator <=(Racional a){
  if(den_==a.den_)
    return (num_<=a.num_);

  else if (num_==a.num_)
    return (den_>=a.den_);

  else {
    num_=num_*a.den_;
    den_=den_*a.den_;

    a.num_=a.num_*den_;
    a.den_=a.den_*den_;

    return (num_<=a.num_);
  }
}

bool Racional::operator >=(Racional a){
  if(den_==a.den_)
    return (num_>=a.num_);

  else if (num_==a.num_)
    return (den_<=a.den_);

  else {
    num_=num_*a.den_;
    den_=den_*a.den_;

    a.num_=a.num_*den_;
    a.den_=a.den_*den_;

    return (num_>=a.num_);
  }
}

void Racional::to_stream(ostream& os){
  os << num_ << "/" << den_;
}

void Racional::from_stream(istream& is){
  cout << "Introduzca el valor que desee para el numerador: ";
  is >> num_;
  cout << "Introduzca el valor que desee para el denominador: ";
  is >> den_;
}

int Racional::get_num(void){
  return num_;
}

unsigned int Racional::get_den(void){
  return den_;
}

void Racional::reducir(int &a, unsigned int &b){
  if(b!=1){

    int c=2;
    while(c<=abs(a)){

      if(b%c==0 && a%c==0){
        b=b/c;
        a=a/c;

      } else
        c++;
      }
  }
}
