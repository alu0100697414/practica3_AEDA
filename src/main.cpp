#include <cstdio>
#include <iostream>
#include <stdexcept>
#include <stdlib.h>

using namespace std;

#include "complejo.hpp"
#include "entero.hpp"
#include "flotante.hpp"
#include "natural.hpp"
#include "racional.hpp"
#include "numero.hpp"
#include "vector.cpp"
#include "nodo.cpp"
#include "l_enlazada.cpp"
#include "stack.cpp"
#include "queue.cpp"

int main(void){

  system("clear");

  bool menu = true;

  while(menu){

    int opc;

    cout << "-------------------------------------------------------------------" << endl;
    cout << "Practica 3: Implementación de plantillas, jerarquias y excepciones." << endl;
    cout << "-------------------------------------------------------------------" << endl;
    cout << "1. Vector." << endl;
    cout << "2. Lista enlazada." << endl;
    cout << "3. Pila." << endl;
    cout << "4. Cola." << endl;
    cout << "5. Salir." << endl;
    cout << endl;
    cout << "Por favor, elija la opcion que desee mostrar: ";
    cin >> opc;
    cout << endl;

    switch (opc){

      case 1:
      {
      Vector<Numero*> v(5);

      Numero* rac1 = new Racional(1,4);
      Numero* nat1 = new Natural(3);
      Numero* ent1 = new Entero(-8);
      Numero* flo1 = new Flotante(3.14);
      Numero* com1 = new Complejo(2,3);

      v.set_v(0,rac1);
      v.set_v(1,nat1);
      v.set_v(2,ent1);
      v.set_v(3,flo1);
      v.set_v(4,com1);

      cout << "El vector es de tamaño: " << v.get_sz() << endl;
      cout << "El vector esta formado por los valores: [";

      for(int i=0; i<4; i++){
        v.get_v(i) -> to_stream(cout);
        cout << " , ";
      }

      v.get_v(4) -> to_stream(cout);
      cout << "]" << endl << endl;
      }
      break;

      case 2:
      {
      Lista<Numero*> L;

      Numero* rac1 = new Racional(1,4);
      Numero* nat1 = new Natural(3);
      Numero* ent1 = new Entero(-8);
      Numero* flo1 = new Flotante(3.14);
      Numero* com1 = new Complejo(2,3);

      Nodo<Numero*>* A(new Nodo<Numero*>(rac1));
      Nodo<Numero*>* B(new Nodo<Numero*>(nat1));
      Nodo<Numero*>* C(new Nodo<Numero*>(ent1));
      Nodo<Numero*>* D(new Nodo<Numero*>(flo1));
      Nodo<Numero*>* E(new Nodo<Numero*>(com1));

      if(L.empty())
        cout << "La lista esta vacia." << endl;
      else
        cout << "La lista no esta vacia." << endl;

      cout << "Ahora introduciremos algunos valores a la lista." << endl;

      L.insert_inicio(A);
      L.insert_final(B);
      L.insert_inicio(C);
      L.insert_final(D);
      L.insert_inicio(E);

      // Deberia salir ECABD

      if(L.empty())
        cout << "La lista esta vacia." << endl;
      else
        cout << "La lista no esta vacia." << endl;

      cout << "La lista esta compuesta de los siguientes elementos:" << endl;

      Nodo<Numero*>* aux = L.top();
      while(aux != NULL){
        aux -> get_dato() -> to_stream(cout);
        cout << " -> ";
        aux = aux -> get_siguiente();
      }
      cout << "NULL" << endl;

      cout << "El inicio de la lista es: ";
      L.top() -> get_dato() -> to_stream(cout);

      cout << endl << "El final de la lista es: ";
      L.get_final() -> get_dato() -> to_stream(cout);
      cout << endl;

      cout << "Ahora extraemos por el inicio los dos primeros valores, quedando la lista: " << endl;
      L.extract_inicio();
      L.extract_inicio();

      aux = L.top();
      while(aux != NULL){
        aux -> get_dato() -> to_stream(cout);
        cout << " -> ";
        aux = aux -> get_siguiente();
      }
      cout << "NULL" << endl;

      cout << "Finalmente, extraemos por el final el primer valor, quedando la lista: " << endl;
      L.extract_final();

      aux = L.top();
      while(aux != NULL){
        aux -> get_dato() -> to_stream(cout);
        cout << " -> ";
        aux = aux -> get_siguiente();
      }
      cout << "NULL" << endl;

      cout << endl;
      }
      break;

      case 3:
      {
      Stack<Numero*> Pila;

      Numero* rac1 = new Racional(1,4);
      Numero* nat1 = new Natural(3);
      Numero* ent1 = new Entero(-8);
      Numero* flo1 = new Flotante(3.14);
      Numero* com1 = new Complejo(2,3);

      Nodo<Numero*>* A(new Nodo<Numero*>(rac1));
      Nodo<Numero*>* B(new Nodo<Numero*>(nat1));
      Nodo<Numero*>* C(new Nodo<Numero*>(ent1));
      Nodo<Numero*>* D(new Nodo<Numero*>(flo1));
      Nodo<Numero*>* E(new Nodo<Numero*>(com1));

      if(Pila.empty())
        cout << "La pila esta vacia." << endl;
      else
        cout << "La pila no esta vacia." << endl;

      cout << "Ahora introduciremos algunos valores a la pila." << endl;

      Pila.insert_inicio(A);
      Pila.insert_final(B);
      Pila.insert_inicio(C);
      Pila.insert_final(D);
      Pila.insert_inicio(E);

      if(Pila.empty())
        cout << "La pila esta vacia." << endl;
      else
        cout << "La pila no esta vacia." << endl;

      cout << "La pila esta compuesta de los siguientes elementos:" << endl;

      Nodo<Numero*>* aux = Pila.top();
      while(aux != NULL){
        aux -> get_dato() -> to_stream(cout);
        cout << " ";
        aux = aux -> get_siguiente();
      }
      cout << endl;

      cout << "El top de la pila es: ";
      Pila.top() -> get_dato() -> to_stream(cout);
      cout << endl;

      cout << "Ahora extraemos dos valores, quedando la pila: " << endl;
      Pila.extract_inicio();
      Pila.extract_inicio();

      aux = Pila.top();
      while(aux != NULL){
        aux -> get_dato() -> to_stream(cout);
        cout << " ";
        aux = aux -> get_siguiente();
      }
      cout << endl;

      cout << endl;
      }
      break;

      case 4:
      {
      Queue<Numero*> Cola;

      Numero* rac1 = new Racional(1,4);
      Numero* nat1 = new Natural(3);
      Numero* ent1 = new Entero(-8);
      Numero* flo1 = new Flotante(3.14);
      Numero* com1 = new Complejo(2,3);

      Nodo<Numero*>* A(new Nodo<Numero*>(rac1));
      Nodo<Numero*>* B(new Nodo<Numero*>(nat1));
      Nodo<Numero*>* C(new Nodo<Numero*>(ent1));
      Nodo<Numero*>* D(new Nodo<Numero*>(flo1));
      Nodo<Numero*>* E(new Nodo<Numero*>(com1));

      if(Cola.empty())
        cout << "La cola esta vacia." << endl;
      else
        cout << "La cola no esta vacia." << endl;

      cout << "Ahora introduciremos algunos valores a la cola." << endl;

      Cola.insert_inicio(A);
      Cola.insert_final(B);
      Cola.insert_inicio(C);
      Cola.insert_final(D);
      Cola.insert_inicio(E);

      if(Cola.empty())
        cout << "La cola esta vacia." << endl;
      else
        cout << "La cola no esta vacia." << endl;

      cout << "La cola esta compuesta de los siguientes elementos:" << endl;

      Nodo<Numero*>* aux = Cola.top();
      while(aux != NULL){
        aux -> get_dato() -> to_stream(cout);
        cout << " ";
        aux = aux -> get_siguiente();
      }
      cout << endl;

      cout << "El top de la cola es: ";
      Cola.top() -> get_dato() -> to_stream(cout);
      cout << endl;

      cout << "Ahora extraemos dos valores, quedando la cola: " << endl;
      Cola.extract_inicio();
      Cola.extract_inicio();

      aux = Cola.top();
      while(aux != NULL){
        aux -> get_dato() -> to_stream(cout);
        cout << " ";
        aux = aux -> get_siguiente();
      }
      cout << endl;

      cout << endl;
      }
      break;

      case 5:
      menu = false;
      break;
    }
  }

  return 0;
}
