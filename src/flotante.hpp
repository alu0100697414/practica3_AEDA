/* Clase flotante */
#ifndef FLOTANTE_H
#define FLOTANTE_H

#pragma once

#include <iostream>
#include <assert.h>
#include "numero.hpp"

using namespace std;

class Flotante : public Numero {

private:

  float dato_;

public:

  Flotante(void);
  Flotante(float dato);
  ~Flotante(void);

  Flotante operator +(const Flotante a);
  Flotante operator -(const Flotante a);
  Flotante operator *(const Flotante a);
  Flotante operator /(const Flotante a);

  Flotante operator =(const Flotante a);
  bool operator ==(const Flotante a);
  bool operator !=(const Flotante a);

  bool operator <(const Flotante a);
  bool operator >(const Flotante a);
  bool operator <=(const Flotante a);
  bool operator >=(const Flotante a);

  virtual void to_stream(ostream& os);
  virtual void from_stream(istream& is);

  float get_dato(void);

};
#endif
