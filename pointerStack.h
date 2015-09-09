//
//  pointerStack.h
//  Stacks
//
//  Created by Patrick Bergman on 09/09/15.
//
//

#ifndef __Stacks__pointerStack__
#define __Stacks__pointerStack__

#include <iostream>
using namespace std;

template <class T>
struct node {
    T value;
    node *next;
}

template <class T>
class pointerStack {
public:
    void create();
    bool isEmpty();
    void clear();
    void push(T& newItem, bool& success);
    void pop(bool& success);
    void top(T& topItem, bool& success);
private:
    *top;
};

#endif /* defined(__Stacks__pointerStack__) */
