//
//  main.cpp
//  Stacks
//
//  Created by Patrick Bergman on 09/09/15.
//
//

#include <iostream>
#include <vector>

#include "vectorStack.h"

using namespace std;

int main(){
	bool stackPush = false, stackPop = false, stackTop = false;
	int item;
	
    cout << "Welkom!" << endl;
    
    vectorStack<int> myVector;
    
    if (myVector.isEmpty()){
    	cout << "myVector is nog leeg" << endl;
    }
    else {
    	cout << "myVector is niet leeg." << endl;
    }
    
    cout << "Ik ga nu 55 op de stapel pushen." << endl;
    myVector.push(55, stackPush);
    myVector.top(item, stackTop);
    
    if (stackTop){
    	cout << "Het bovenste element op de stapel is: " << item << endl;
    }
    else{
    	cout << "De stapel is leeg, er is geen bovenste element." << endl;
    }
    
    cout << "Ik ga nu 35 op de stapel pushen." << endl;
    
    myVector.push(35, stackPush);
    myVector.top(item, stackTop);
    
    if (stackTop){
    	cout << "Het bovenste element op de stapel is: " << item << endl;
    }
    else{
    	cout << "De stapel is leeg, er is geen bovenste element." << endl;
    }
    
   	cout << "Ik ga nu het bovenste element van de stapel halen." << endl;
   
    myVector.pop(stackPop);
    
    myVector.top(item, stackTop);
    if (stackTop){
    	cout << "Het bovenste element op de stapel is: " << item << endl;
    }
    else{
    	cout << "De stapel is leeg, er is geen bovenste element." << endl;
    }
    
    cout << "Ik ga nu het bovenste element van de stapel halen." << endl;
    myVector.pop(stackPop);
    
    myVector.top(item, stackTop);
    
    if (stackTop){
    	cout << "Het bovenste element op de stapel is: " << item << endl;
    }
    else{
    	cout << "De stapel is leeg, er is geen bovenste element." << endl;
    }
    
    cout << "Ik ga nu 5, 7 en 9 op de stapel pushen." << endl;
    myVector.push(5, stackPush);
    myVector.push(7, stackPush);
    myVector.push(9, stackPush);
    
    cout << "Ik ga de stapel nu in één keer leeg maken. " << endl;
    myVector.clear();
    
    myVector.top(item, stackTop);
    if (stackTop){
    	cout << "Het bovenste element op de stapel is: " << item << endl;
    }
    else{
    	cout << "De stapel is leeg, er is geen bovenste element." << endl;
    }
    
    return 0;
}
