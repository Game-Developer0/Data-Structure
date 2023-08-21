#include<iostream>
using namespace std;
class stack {
	int size;
	int top;
	int* arr;
public:
	stack(int size) {
		this->size = size;
		top = -1;
		arr = new int[size];
	}
	int Isfull() {
		if (top == size-1) {
			return 1;
		}
		else {
			return 0;
		}
	}
	int Isempty() {
		if (top == -1) {
			return 1;
		}
		else {
			return 0;
		}
	}
	void Push(int value) {
		if (Isfull()) {
			cout << "Stack over flow can't add this element:" << value<<endl;
		}
		else {
			top++;
			arr[top] = value;
		}
	}
	int Pop() {
		int num;
		num = arr[top];
		top--;
		return num;
	}
};
int main() {
	stack* ptr = new stack(10);
	cout << "Stack has been created successfully" << endl;
	cout << "Before pushing, Full: " << ptr->Isfull() << endl;
	cout << "Before pushing, Empty: " << ptr->Isempty() << endl;
	ptr->Push(12);
	ptr->Push(35);
	ptr->Push(67);
	ptr->Push(23);
	ptr->Push(54);
	ptr->Push(98);
	ptr->Push(90);
	ptr->Push(9);
	ptr->Push(3);
	ptr->Push(84);

	cout << "After  pushing, Full: " << ptr->Isfull() << endl;
	cout << "After pushing, Empty: " << ptr->Isempty() << endl;

	cout << "The element that Poped is:" << ptr->Pop() << endl;
	cout << "The element that Poped is:" << ptr->Pop()<<endl;
	cout << "The element that Poped is:" << ptr->Pop() << endl;
}