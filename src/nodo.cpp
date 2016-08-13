#include "nodo.hpp"

using namespace std;

template<class T> Nodo<T>::Nodo(void):siguiente_(NULL){}

template<class T> Nodo<T>::Nodo(T dato):siguiente_(NULL),dato_(dato){}


template<class T> Nodo<T>::Nodo(Nodo<T>* siguiente, T dato):siguiente_(siguiente),dato_(dato){}


template<class T> Nodo<T>::~Nodo(void){}


template<class T> void Nodo<T>::set_siguiente(Nodo<T>* siguiente){
  siguiente_ = siguiente;
}


template<class T> Nodo<T>* Nodo<T>::get_siguiente(void){
  return siguiente_;
}


template<class T> void Nodo<T>::set_dato(T dato){
  dato_ = dato;
}


template<class T> T Nodo<T>::get_dato(void){
  return dato_;
}
