#ifndef pointerStack_h
#define pointerStack_h

using namespace std;

class item {
public:
	int value;
	item* next;
};

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
		item* hulp = topItem;
		while(hulp != NULL) {
			hulp = hulp->next;
			bool success = false;
			pop(success);
		}
	}

	void push(int newItem, bool& success) {
		item* np = new item;
	    np->value = newItem;
	    np->next = topItem;
	    topItem = np;
	    success = true;
	}

	void pop(bool& success) {
		item* np = topItem;
		topItem = topItem->next;
		delete np;
		success = true;
	}

	void top(int& getItem, bool& success) {
		getItem = topItem->value;
		success = true;
	}

	~pointerStack() {
		clear();
	}

private:
	item* topItem;
};

#endif