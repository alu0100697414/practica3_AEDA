/* Clase nodo */
#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;

template<class T>
class Nodo {
private:

  Nodo<T>* siguiente_;
  T dato_;

public:

  Nodo(void);
  Nodo(T dato);
  Nodo(Nodo<T>* siguiente, T dato);
  ~Nodo(void);

  void set_siguiente(Nodo<T>* siguiente);
  Nodo<T>* get_siguiente(void);

  void set_dato(T dato);
  T get_dato(void);

};
#endif
