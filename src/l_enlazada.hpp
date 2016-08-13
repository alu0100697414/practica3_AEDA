/* Clase lista enlazada */
#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include "nodo.hpp"

using namespace std;

template<class T>
class Lista {
protected:

  Nodo<T>* inicio_;
  Nodo<T>* final_;

public:

  Lista(void);
  ~Lista(void);

  bool empty(void);

  Nodo<T>* top(void);
  Nodo<T>* get_final(void);

  void insert_empty(Nodo<T>* nodo);
  void insert_inicio(Nodo<T>* nodo);
  void insert_final(Nodo<T>* nodo);

  Nodo<T>* extract_inicio(void);
  Nodo<T>* extract_final(void);

};
#endif
