/**
* arrayStack: file to manage a stack based on an array
* @author Patrick Bergman (s1553097)
* @author Rose Browne (s1652834)
* @file arrayStack.h
* @date 22-09-2015 Add comments
**/

#ifndef arrayStack_h
#define arrayStack_h

using namespace std;
const int MAX = 100;

template <class T>
class arrayStack {
	public:
		bool popIt;
	
		/* no create() function, since the constructor arrayStack() 
		doest the same. The constructor sets the current index of the 
		stack to -1 to check if the array is empty. */
		arrayStack() {
			index = -1;
		}

		bool isEmpty() {
			return (index == -1);
		}

		/* As long as the stack is not empty, we keep popping the top
		element. */
		void clear() {
			while (!isEmpty()){
				pop(popIt);
			}
		}
		
		/* Before pushing to the stack, push() checks if the stack 
		isn't full already. Everytime an element gets popped to the 
		stack, the currect index of the array needs to be updated. */
		void push(T newItem, bool & success) {
			if (index >= (MAX-1)){
				success = false;
			}
			else {
				index++;
				theStack[index] = newItem;
				success = true;
			}
		}

		/* Everytime an element gets popped from the stack, the
		currect index of the array gets updated. */ 
		void pop(bool & success) {
			success = (index > -1);
			index--;
		}

		void top(T & topItem, bool & success) {
			if (isEmpty()){
				success = false;
			}
			else {
				topItem = theStack[index];
				success = true;
			}
		}

	private:
		T theStack[MAX];
		int index; 
};

#endif 
