/* Clase cola (queue) */
#ifndef COLA_H
#define COLA_H

#include <iostream>
#include "l_enlazada.hpp"

template<class T>
class Queue : public Lista<T> {
public:

  Queue(void);
  ~Queue(void);

  Nodo<T>* get_final(void);

  void insert_inicio(Nodo<T>* nodo);

  Nodo<T>* extract_final(void);

};
#endif
