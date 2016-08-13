/* Clase pila (stack) */
#ifndef PILA_H
#define PILA_H

#include <iostream>
#include "l_enlazada.hpp"

template<class T>
class Stack : public Lista<T> {
public:

  Stack(void);
  ~Stack(void);

  Nodo<T>* get_final(void);

  void insert_final(Nodo<T>* nodo);

  Nodo<T>* extract_final(void);

};
#endif
