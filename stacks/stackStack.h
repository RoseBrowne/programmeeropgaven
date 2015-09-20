/**
* stackStack: file to manage a stack based on the STL stack
* @author Patrick Bergman (s1553097)
* @author Rose Browne (studentnummer)
* @file stackStack.h
* @date 15-09-2015 Add comments
**/

#ifndef stackStack_h
#define stackStack_h

#include <stack> 

using namespace std;

template <class T>
class stackStack {
public:
	stackStack() {
		create();
	}

	void create() {
		stack<T> myStack;
	}

	bool isEmpty() {
		return myStack.empty();
	}

	void clear() {
		while(myStack.size() > 0)
		{
			myStack.pop();
		}
	}

	void push(T newItem, bool& success) {
		myStack.push(newItem);
	}

	void pop(bool& success) {
		myStack.pop();
	}

	void top(T& getItem, bool& success) {
		getItem = myStack.top();
	}

	~stackStack() {
		clear();
	}

private:
	stack<T> myStack;
};

#endif