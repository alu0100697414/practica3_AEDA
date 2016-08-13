/* Clase racional */
#ifndef RACIONAL_H
#define RACIONAL_H

#pragma once

#include <iostream>
#include <assert.h>
#include "numero.hpp"

using namespace std;

class Racional : public Numero {

private:

  int num_;
  unsigned int den_;

public:

  Racional(void);
  Racional(int num, unsigned int den);
  ~Racional(void);

  Racional operator +(const Racional a);
  Racional operator -(const Racional a);
  Racional operator *(const Racional a);
  Racional operator /(const Racional a);

  Racional operator =(const Racional a);
  bool operator ==(Racional a);
  bool operator !=(Racional a);

  bool operator <(Racional a);
  bool operator >(Racional a);
  bool operator <=(Racional a);
  bool operator >=(Racional a);

  void to_stream(ostream& os);
  void from_stream(istream& is);

  virtual int get_num(void);
  virtual unsigned int get_den(void);

  void reducir(int &a, unsigned int &b);

};
#endif
