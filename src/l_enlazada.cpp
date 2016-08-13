#include "l_enlazada.hpp"

using namespace std;

template<class T> Lista<T>::Lista(void):inicio_(NULL),final_(NULL){}


template<class T> Lista<T>::~Lista(void){
  Nodo<T>* aux = inicio_;
  while(aux != NULL){
    inicio_ = inicio_ -> get_siguiente();
    delete aux;
    aux = inicio_;
  }
}

template<class T> Nodo<T>* Lista<T>::top(void){
  return inicio_;
}


template<class T> Nodo<T>* Lista<T>::get_final(void){
  return final_;
}


template<class T> bool Lista<T>::empty(void){
  if(inicio_ == NULL)
    return true;
  else
    return false;
}


template<class T> void Lista<T>::insert_empty(Nodo<T>* nodo){
  inicio_ = nodo;
  final_ = nodo;
}


template<class T> void Lista<T>::insert_inicio(Nodo<T>* nodo){
  if(empty())
    insert_empty(nodo);
  else {
    nodo -> set_siguiente(inicio_);
    inicio_ = nodo;
  }
}


template<class T> void Lista<T>::insert_final(Nodo<T>* nodo){
  if(empty())
    insert_empty(nodo);
  else {
    final_ -> set_siguiente(nodo);
    final_ = nodo;
  }
}


template<class T> Nodo<T>* Lista<T>::extract_inicio(void){
  if(inicio_ == final_){
    Nodo<T>* aux = inicio_;
    inicio_ = NULL;
    final_ = NULL;
    return aux;

  } else {
    Nodo<T>* aux = inicio_;
    inicio_ = inicio_ -> get_siguiente();
    return aux;
  }
}


template<class T> Nodo<T>* Lista<T>::extract_final(void){
  if(inicio_ == final_){
    Nodo<T>* aux = inicio_;
    inicio_ = NULL;
    final_ = NULL;
    return aux;

  } else {
    Nodo<T>* aux = inicio_;
    while(aux -> get_siguiente() != final_)
      aux = aux -> get_siguiente();

    final_ = aux;
    aux = aux -> get_siguiente();
    final_ -> set_siguiente(NULL);
    return aux;
  }
}
