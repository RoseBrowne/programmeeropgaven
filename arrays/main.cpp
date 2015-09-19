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

    arrayStack<int> myStack;

    if (myStack.isEmpty()){
    	cout << "De stapel is leeg." << endl;
    }
    else {
    	cout << "De stapel is niet leeg." << endl;
    }
    
    cout << "Ik ga nu 5 op de stapel pushen." << endl;
    myStack.push(5, stackPush);
    
    myStack.top(item, stackTop);
    
	if (stackTop){
    	cout << "Het bovenste element op de stapel is: " << item << endl;
    }
    else{
    	cout << "De stapel is leeg, er is geen bovenste element." << endl;
    }
	
	cout << "Ik ga nu 15 op de stapel pushen." << endl;
    myStack.push(15, stackPush);
    
    myStack.top(item, stackTop);
    
	if (stackTop){
    	cout << "Het bovenste element op de stapel is: " << item << endl;
    }
    else{
    	cout << "De stapel is leeg, er is geen bovenste element." << endl;
    }
    
    cout << "Ik ga nu het bovenste item van de stapel afhalen." << endl;
    myStack.pop(stackPop);
    myStack.top(item, stackTop);  
    
	if (stackTop){
    	cout << "Het bovenste element op de stapel is: " << item << endl;
    }
    else{
    	cout << "De stapel is leeg, er is geen bovenste element." << endl;
    }
    
    
    cout << "Ik ga nu het bovenste item van de stapel afhalen." << endl;
    myStack.pop(stackPop);
    myStack.top(item, stackTop);  
    
	if (stackTop){
    	cout << "Het bovenste element op de stapel is: " << item << endl;
    }
    else{
    	cout << "De stapel is leeg, er is geen bovenste element." << endl;
    }
    
    
    cout << "Ik ga nu 5, 7 en 9 op de stapel pushen." << endl;
    myStack.push(5, stackPush);
    myStack.push(7, stackPush);
    myStack.push(9, stackPush);
    
    cout << "IK ga de stapel nu in één keer leeg maken. " << endl;
    
    myStack.clear();
    
	
    myStack.top(item, stackTop);  
    
	if (stackTop){
    	cout << "Het bovenste element op de stapel is: " << item << endl;
    }
    else{
    	cout << "De stapel is leeg, er is geen bovenste element." << endl;
    }
    
    
    return 0;
}
