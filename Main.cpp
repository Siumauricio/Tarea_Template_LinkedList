#include "Stack.h"
#include <iostream>
using namespace std;

int main(){
	Stack<string> *a = new Stack<string>;
	a->push ("Hola");
	a->push ("Mundo");
	a->push ("!!!!");

	a->print ();
	a->pop ();
	a->print ();
	cout << endl;
	cout << a->peek ();
	
}