#include "vector.hpp"
#include <stdexcept>

template<class T> Vector<T>::Vector(int sz):v_(NULL),sz_(sz){
  try {
    if (sz_ < 0) throw std::underflow_error("El tamaño del vector no puede ser negativo.");
  }

  catch (const std::underflow_error& e) { // captura todas las excepciones de la jerarquía
    std::cout << "Error: " << e.what() << std:: endl;
  }

  v_ = new T[sz_];
}

template<class T> Vector<T>::~Vector(void){
  if (v_ != NULL){
    delete [] v_;
    v_ = NULL;
  }
}

template<class T> T Vector<T>::get_v(int pos){
  try {
    if (pos < 0 || pos >= sz_) throw std::invalid_argument("Acceso a una posicion no existente del vector.");
  }

  catch (const std::invalid_argument& e) { // captura todas las excepciones de la jerarquía
    std::cout << "Error: " << e.what() << std:: endl;
  }

  return v_[pos];
}

template<class T> void Vector<T>::set_v(int pos, T val){
  try {
    if (pos < 0 || pos >= sz_) throw std::invalid_argument("Acceso a una posicion no existente del vector.");
  }

  catch (const std::invalid_argument& e) { // captura todas las excepciones de la jerarquía
    std::cout << "Error: " << e.what() << std:: endl;
  }

  v_[pos] = val;
}

template<class T> int Vector<T>::get_sz(void){
  return sz_;
}
