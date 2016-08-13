/* Clase vector */
#ifndef VECTOR_H
#define VECTOR_H

#pragma once

#include <iostream>

template<class T>
class Vector {

private:

  T* v_;
  int sz_;

public:

  Vector(int sz);
  ~Vector(void);

  T get_v(int pos);
  void set_v(int pos, T val);

  int get_sz(void);

};
#endif
