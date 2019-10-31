#pragma once
#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;

template<class T>
struct StackNode {
	T dato;
	StackNode *siguiente;

};

template<class T>
class Stack {
private:
	StackNode<T> *primero;
public:
	Stack (void);
	bool estaVacia (void);
	void push (T);
	void pop (void);
	void print ();
	const T &peek (void);
	~Stack ();
};

template <class T>
Stack<T>::Stack ():Stack<T>::primero (nullptr) {}

template <class T>
bool Stack<T>::estaVacia (void) {
	return primero == nullptr;
}

template <class T>
void Stack<T>::push (T dato) {
	StackNode<T> *nuevo = new StackNode<T>;
	nuevo->dato = dato;
	nuevo->siguiente = nullptr;
	if(estaVacia ()) {
		primero = nuevo;
	} else {
		nuevo->siguiente = primero;
		primero = nuevo;
	}
}
template <class T>
void Stack<T>::pop (void) {
	if(!estaVacia ()) {
		StackNode<T> *actual = primero;
		primero = primero->siguiente;
		delete actual;
	}
}

template <class T>
void Stack<T>::print (void) {
	StackNode<T> *actual = primero;
	while(actual != nullptr) {
		cout << actual->dato << endl;
		actual = actual->siguiente;
	}
}
template <class T>
const T &Stack<T>::peek (void) {
	StackNode<T> *actual = primero;
	return actual->dato;
}
#endif // !STACK_H


