//
//  pointerStack.cpp
//  Stacks
//
//  Created by Patrick Bergman on 09/09/15.
//
//

#include "pointerStack.h"

// creates a new stack as double linked list
void create() {
    top = NULL;
}

bool isEmpty() {
    return top == NULL;
}

void clear() {
    if(top != NULL) {
        while(top != NULL)
        {
            pop(false);
        }
    }
    cout << "Stapel is geleegd" << endl;
}

void push(const T& newItem, bool& success) {
    np = new node;
    np->value = newItem;
    np->next = top;
    top = np;
}

void pop(bool& success) {
    old = top;
    top = top->next;
    delete old;
    success = true;
}

void top(T& topItem, bool& success) {
    if(top != NULL) {
        topItem = top->value;
    }
    success = top != NULL;
}