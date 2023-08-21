#include<iostream>
using namespace std;
class stack {
	int size;
	int* arr;
public:
	int top=-1;
	int value;
	stack(int size) {
		this->size=size;
		
		arr = new int[size];
	}
	int Isfull() {
		if (top > size - 1) {
			return 1;
		}
		return 0;
	}
	int Isempty() {
		if (top == -1) {
			return 1;
		}
		return 0;
	}

	void push(int element) {
		if (Isfull()) {
			cout << "Stack overflow. Cannot push the element: " << element << endl;
		}
		else {
			top++;
			arr[top] = element;
		}
	}

	int pop() {
		
		if (Isfull()) {
			cout << "stack under flow cann't pop" << endl;
		}
		else
		value = arr[top];
		top--;

		return value;
	}
	int peak(int i) {
		int value = top - i + 1;
		if (value < 0) {
			cout << "Invalid position" << endl;
		}
		else
			return arr[value];
	}

};
int main() {
	stack* ptr = new stack(10);
	ptr->push(56);
	ptr->push(45);
	ptr->push(23);
	ptr->push(12);
	ptr->push(13);
	ptr->push(89);
	
	for (int j = 1; j < ptr->top+2; j++)
		cout << "The value at position " << j << " is" << ptr->peak(j)<<endl;
	
	
}
