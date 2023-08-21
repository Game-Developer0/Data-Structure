#include<iostream>
using namespace std;
class stack {
public:
	int size;
	int top;
	int* arr;
};
int Isempty(stack* ptr) {
	if (ptr->top == -1) {
		return 1;
	}
	else {
		return 0;
	}
}
int Isfull(stack* ptr) {
	if (ptr->top == ptr->size - 1) {
		return 1;

	}
	else {
		return 0;
	}

}
int main() {
	stack* s = new stack;
	s->size = 6;
	s->top = -1;
	s->arr = new int[s->size];

	s->arr[0]=34;
	s->top++;
	s->arr[1] = 34;
	s->top++;
	s->arr[2] = 34;
	s->top++;
	s->arr[3] = 34;
	s->top++;
	s->arr[4] = 34;
	s->top++;
	s->arr[5] = 34;
	s->top++;


	if (Isempty(s)) {
		cout << "The stack is empty" << endl;
	}
	else {
		cout << "The stack is not empty" << endl;
	}
	if (Isfull(s)) {
		cout << "The stack is full" << endl;
	}
	else {
		cout << "The stack is not full" << endl;
	}

}