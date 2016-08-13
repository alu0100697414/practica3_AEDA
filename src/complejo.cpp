#include "complejo.hpp"

using namespace std;

Complejo::Complejo(void):re_(0.0),im_(0.0){}

Complejo::Complejo(float re, float im):re_(re),im_(im){}

Complejo::~Complejo(void){}

Complejo Complejo::operator+(const Complejo a){
  return Complejo(re_+a.re_, im_+a.im_);
}

Complejo Complejo::operator-(const Complejo a){
  return Complejo(re_-a.re_, im_-a.im_);
}

Complejo Complejo::operator*(const Complejo a){
  return Complejo(re_*a.re_-im_*a.im_, re_*a.im_+im_*a.re_);
}

Complejo Complejo::operator/(const Complejo a){
  return Complejo((re_*a.re_+im_*a.im_)/(a.re_*a.re_+a.im_*a.im_), (im_*a.re_-re_*a.im_)/(a.re_*a.re_+a.im_*a.im_));
}

Complejo Complejo::operator =(const Complejo a){
  re_ = a.re_;
  im_ = a.im_;

  return *this;
}

bool Complejo::operator ==(const Complejo a){
  return (re_==a.re_ && im_==a.im_);
}

bool Complejo::operator !=(const Complejo a){
  return (re_!=a.re_ || im_!=a.im_);
}

bool Complejo::operator <(const Complejo a){
  return ((re_<a.re_)||(re_==a.re_ && im_<a.im_));
}

bool Complejo::operator >(const Complejo a){
  return ((re_>a.re_)||(re_==a.re_ && im_>a.im_));
}

bool Complejo::operator <=(const Complejo a){
  return ((re_<a.re_)||(re_==a.re_ && im_<a.im_)||(re_==a.re_ && im_==a.im_));
}

bool Complejo::operator >=(const Complejo a){
  return ((re_>a.re_)||(re_==a.re_ && im_>a.im_)||(re_==a.re_ && im_==a.im_));
}

void Complejo::to_stream(ostream& os){
  os << "(" << re_ << "," << im_ << "i)";
}

void Complejo::from_stream(istream& is){
  cout << "Introduzca el valor que desee para la parte real: ";
  is >> re_;
  cout << "Introduzca el valor que desee para la parte imaginaria: ";
  is >> im_;
}

float Complejo::get_re(void){
  return re_;
}

float Complejo::get_im(void){
  return im_;
}
