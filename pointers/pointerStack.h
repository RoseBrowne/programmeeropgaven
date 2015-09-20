#ifndef pointerStack_h
#define pointerStack_h

using namespace std;

template <class T>
class item {
public:
	T value;
	item<T>* next;
};

template <class T>
class pointerStack {
public:
	pointerStack() {
		create();
	}

	void create() {
		topItem = NULL;
	}

	bool isEmpty() {
		return topItem == NULL;
	}

	void clear() {
		item<T>* hulp = topItem;
		while(hulp != NULL) {
			hulp = hulp->next;
			bool success = false;
			pop(success);
		}
	}

	void push(T newItem, bool& success) {
		item<T>* np = new item<T>;
	    np->value = newItem;
	    np->next = topItem;
	    topItem = np;
	    success = true;
	}

	void pop(bool& success) {
		item<T>* np = topItem;
		topItem = topItem->next;
		delete np;
		success = true;
	}

	void top(T& getItem, bool& success) {
		getItem = topItem->value;
		success = true;
	}

	~pointerStack() {
		clear();
	}

private:
	item<T>* topItem;
};

#endif