/* Clase natural */
#ifndef NATURAL_H
#define NATURAL_H

#pragma once

#include <iostream>
#include <assert.h>
#include <iomanip>
#include "numero.hpp"

using namespace std;

class Natural : public Numero {

private:

  unsigned int dato_;

public:

  Natural(void);
  Natural(int dato);
  ~Natural(void);

  Natural operator +(const Natural a);
  Natural operator -(const Natural a);
  Natural operator *(const Natural a);
  Natural operator /(const Natural a);

  Natural operator =(const Natural a);
  bool operator ==(const Natural a);
  bool operator !=(const Natural a);

  bool operator <(const Natural a);
  bool operator >(const Natural a);
  bool operator <=(const Natural a);
  bool operator >=(const Natural a);

  virtual void to_stream(ostream& os);
  virtual void from_stream(istream& is);

  unsigned int get_dato(void);

};
#endif
