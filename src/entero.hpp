/* Clase entero */
#ifndef ENTERO_H
#define ENTERO_H

#pragma once

#include <iostream>
#include <assert.h>
#include "numero.hpp"

using namespace std;

class Entero : public Numero {

private:

  int dato_;

public:

  Entero(void);
  Entero(int dato);
  ~Entero(void);

  Entero operator +(const Entero a);
  Entero operator -(const Entero a);
  Entero operator *(const Entero a);
  Entero operator /(const Entero a);

  Entero operator =(const Entero a);
  bool operator ==(const Entero a);
  bool operator !=(const Entero a);

  bool operator <(const Entero a);
  bool operator >(const Entero a);
  bool operator <=(const Entero a);
  bool operator >=(const Entero a);

  virtual void to_stream(ostream& os);
  virtual void from_stream(istream& is);

  int get_dato(void);

};
#endif
