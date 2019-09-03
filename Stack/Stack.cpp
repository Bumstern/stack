#include "Stack.h"
#include <cmath>

void stack::push(int k) {
	++len;
	if (len > real_len) {						// ≈сли не хватает места
		real_len += N_SIZE;						// то увеличить размер на N_SIZE
		int* n = new int[real_len];						
		for (int i = 0; i < size(); i++) {
			n[i] = elem[i];
		}
		delete[] elem;
		elem = n;						        
	}
	elem[len - 1] = k;
}

int stack::pop() {
	if (size() - 1 >= 0) {
		--len;
		int temp = elem[len];
		elem[len] = 0;
		if (len == real_len - N_SIZE) {
			real_len -= N_SIZE;
			int* n = new int[real_len];  
			for (int i = 0; i < len; i++) {			
				n[i] = elem[i];
			}
			delete[] elem;
			elem = n;
		}
		return temp;
	}
}

int stack::back() {
	return elem[size() - 1];
}

int stack::size() {
	return len;
}

void stack::clear() {
	delete[] elem;
	elem = 0;
}