/* Clase numero */
#ifndef NUMERO_H
#define NUMERO_H

#pragma once

#include <iostream>
#include <assert.h>

using namespace std;

class Numero {

public:

  virtual void to_stream(ostream& os) = 0;
  virtual void from_stream(istream& is) = 0;

};
#endif
