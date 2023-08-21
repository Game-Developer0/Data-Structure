#include<iostream>
using namespace std;
class Stack {
public:
	int top=-1;
	int size = 10;
	char* arr;
	Stack() {
		arr = new char[size];
	}
};
int IsEmpty(Stack* ptr) {
	if (ptr->top != -1) {
		return 1;
	}
	return 0;
}
int IsFull(Stack* ptr) {
	if (ptr->top == ptr->size-1) {
		return 1;
	}
	return 0;
}
void Push(Stack* ptr,char val) {
	if (IsFull(ptr)) {
		cout << "Stack Overflow" << endl;
	}
	else {
		ptr->top++;
		ptr->arr[ptr->top] = val;

	}
}
char Pop(Stack* ptr) {
	if (IsEmpty(ptr)) {
		cout << "Stack UnderFlow" << endl;
		return 0;
	}
	else {
		char num = ptr->arr[ptr->top];
		ptr->top--;
		return num;

	}
}
int Paranthesis(Stack* ptr,string& exp) {
	
	for (int i = 0; i < exp.size(); i++) {
		if (exp[i] == '(') {
			Push(ptr, '(');
	 }
		else if (exp[i] == ')') {
			if (IsEmpty(ptr)) {
				return 0;
			}
			else {
				Pop(ptr);
			}
		}
	}
	if (IsEmpty(ptr)) {
		return 1;
	}
	return 0;
}
int main() {
	Stack* ptr = new Stack();
	string exp = "(8*9))";
	if (Paranthesis(ptr,exp)) {
		cout << "The paranthesis is matching" << endl;
	}
	else
		cout<< "The paranthesis is not matching" << endl;
}