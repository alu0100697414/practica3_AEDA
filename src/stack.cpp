#include "stack.hpp"

using namespace std;

template<class T> Stack<T>::Stack(void){}


template<class T> Stack<T>::~Stack(void){}

template<class T> Nodo<T>* Stack<T>::get_final(void){
  return Lista<T>::top();
}


template<class T> void Stack<T>::insert_final(Nodo<T>* nodo){
  insert_inicio(nodo);
}

template<class T> Nodo<T>* Stack<T>::extract_final(void){
  return Lista<T>::extract_inicio();
}
