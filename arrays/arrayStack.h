//
//  arrayStack.h
//  Stacks
//
//  Created by Patrick Bergman on 09/09/15.
//
//

#ifndef arrayStack_h
#define arrayStack_h

using namespace std;

const int MAX = 100;


template <class T>
class arrayStack {
	public:
		bool popIt;
	
		arrayStack() {
			create();
		}

		void create() {
			index = -1;
		}

		bool isEmpty() {
			return (index == -1);
		}

		void clear() {
			while (!isEmpty()){
				pop(popIt);
			}
		}

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
