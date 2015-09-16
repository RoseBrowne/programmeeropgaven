//
//  main.cpp
//  Stacks
//
//  Created by Patrick Bergman on 09/09/15.
//
//

#include <iostream>

#include "arrayStack.h"

using namespace std;

int main(){
	bool stackPush = false, stackPop = false, stackTop = false;
	int item;
	
    cout << "Welkom!" << endl;

    arrayStack myStack;

    if (myStack.isEmpty()){
    	cout << "De stapel is leeg." << endl;
    }
    else {
    	cout << "De stapel is niet leeg." << endl;
    }
    
    cout << "Ik ga nu 5 op de stapel pushen." << endl;
    myStack.push(5, stackPush);
    
    if (myStack.isEmpty()){
    	cout << "De stapel is leeg." << endl;
    }
    else {
    	cout << "De stapel is niet leeg." << endl;
    }
    
    myStack.top(item, stackTop);
    
    cout << "Het bovenste item is nu: " << item << endl;
    
    myStack.push(15, stackPush);
    
    myStack.top(item, stackTop);
    
    cout << "Het bovenste item is nu: " << item << endl;
    
    cout << "Ik ga nu het bovenste item van de stapel afhalen." << endl;
    myStack.pop(stackPop);
    
    if (stackTop){
    	cout << "Poppen van de stapel is gelukt." << endl;
    }
    else {
    	cout << "Poppen van de stapel is niet gelukt." << endl;
    }
    
    cout << "Ik ga kijken wat het bovenste item van de stapel nu is" << endl; 
    myStack.top(item, stackTop);  
    
     
    if (stackTop){
    	myStack.top(item, stackTop);
    	cout << "Het bovenste item is nu: " << item << endl;
    }
    
    return 0;
}
