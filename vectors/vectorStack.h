//
//  vectorStack.h
//  Stacks
//
//  Created by Patrick Bergman on 09/09/15.
//
//

#ifndef vectorStack_h
#define vectorStack_h

#include <vector>
using namespace std;

template <class T>
class vectorStack {
	public:
	
		vectorStack() {
		}

		bool isEmpty() {
			return myVector.size() == 0;
		}

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
		vector<int> myVector;
		int index;
};

#endif
