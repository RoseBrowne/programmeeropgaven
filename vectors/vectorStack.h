/**
* vectorStack: file to manage a stack based on the STL vector
* @author Patrick Bergman (s1553097)
* @author Rose Browne (s1652834)
* @file vectorStack.h
* @date 22-09-2015 Add comments
**/

#ifndef vectorStack_h
#define vectorStack_h

#include <vector>
using namespace std;

template <class T>
class vectorStack {
	public:
	
		/* no create() function, since the constructor vectorStack() 
		doest the same. */
		vectorStack() {
		}

		bool isEmpty() {
			return myVector.size() == 0;
		}

		/* There needs to be an extra variable "grootte" to determine
		the scope of i, because myVector.size() will change after each
		iteration in i. */
		void clear() {
			int grootte = myVector.size();    
			for (int i = 0; i < grootte; i++){
				myVector.erase(myVector.begin()+(myVector.size()-1));
			}
		}

		void push(T newItem, bool & success) {
			myVector.push_back(newItem);
		}

		void pop(bool & success) {
			if (isEmpty()){
				success = false;
			}
			else {
				myVector.erase(myVector.begin()+(myVector.size()-1));
				success = true;
			}
		}

		void top(T & topItem, bool & success) {
			if (isEmpty()){
				success = false;
			}
			else {
				topItem = myVector.at(myVector.size()-1);
				success = true;
			}
		}

	private:
		vector<T> myVector;
		int index;
};

#endif
