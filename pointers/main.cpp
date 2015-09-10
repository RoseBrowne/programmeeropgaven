#include <iostream>

#include "pointerStack.h"

using namespace std;

int main() {

	cout << "Welkom bij mijn stapel!" << endl;

	pointerStack MyStack;

	bool toegevoegd = false;

	MyStack.push(5, toegevoegd);

	if(MyStack.isEmpty()) {
		cout << "Stack is leeg" << endl;
	} else {
		cout << "Er zit iets in de stack" << endl;
	}

	MyStack.push(8, toegevoegd);

	int item;
	bool gevonden = false;

	MyStack.top(item, gevonden);

	cout << "Op de top zit: " << item << "." << endl;

	MyStack.clear();

	if(MyStack.isEmpty()) {
		cout << "Stack is leeg" << endl;
	} else {
		cout << "Er zit iets in de stack" << endl;
	}

	return 0;
}