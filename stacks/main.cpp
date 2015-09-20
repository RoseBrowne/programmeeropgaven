/**
* stackStack: file to test the stack implementation
* @author Patrick Bergman (s1553097)
* @author Rose Browne (studentnummer)
* @file main.cpp
* @date 15-09-2015 Add comments
**/

#include <iostream>

#include "stackStack.h"

using namespace std;

int main() {

	cout << "Welkom bij mijn stapel!" << endl;

	stackStack<char> MyStack;

	bool toegevoegd = false;

	MyStack.push('a', toegevoegd);

	if(MyStack.isEmpty()) {
		cout << "Stack is leeg" << endl;
	} else {
		cout << "Er zit iets in de stack" << endl;
	}

	MyStack.push('z', toegevoegd);

	char item;
	bool gevonden = false;

	MyStack.top(item, gevonden);

	cout << "Op de top zit: " << item << "." << endl;

	MyStack.pop(toegevoegd);

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