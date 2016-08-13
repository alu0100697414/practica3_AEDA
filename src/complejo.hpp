/* Clase complejo */
#ifndef COMPLEJO_H
#define COMPLEJO_H

#pragma once

#include <iostream>
#include <assert.h>
#include "numero.hpp"

using namespace std;

class Complejo : public Numero {

private:

  float re_;
  float im_;

public:

  Complejo(void);
  Complejo(float re, float im);
  ~Complejo(void);

  Complejo operator +(const Complejo a);
  Complejo operator -(const Complejo a);
  Complejo operator *(const Complejo a);
  Complejo operator /(const Complejo a);

  Complejo operator =(const Complejo a);
  bool operator ==(const Complejo a);
  bool operator !=(const Complejo a);

  bool operator <(const Complejo a);
  bool operator >(const Complejo a);
  bool operator <=(const Complejo a);
  bool operator >=(const Complejo a);

  virtual void to_stream(ostream& os);
  virtual void from_stream(istream& is);

  float get_re(void);
  float get_im(void);

};
#endif
