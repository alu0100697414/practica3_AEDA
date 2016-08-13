#include "queue.hpp"

using namespace std;

template<class T> Queue<T>::Queue(void){}


template<class T> Queue<T>::~Queue(void){}


template<class T> Nodo<T>* Queue<T>::get_final(void){
  return Lista<T>::top();
}


template<class T> void Queue<T>::insert_inicio(Nodo<T>* nodo){
  insert_final(nodo);
}

template<class T> Nodo<T>* Queue<T>::extract_final(void){
  return Lista<T>::extract_inicio();
}
