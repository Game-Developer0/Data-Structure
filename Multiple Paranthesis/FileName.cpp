#include<iostream>
using namespace std;
class Stack {
public:
	int size;
	int top;
	char* arr;
	Stack(int size) {
		this->size = size;
		top = -1;
		arr = new char[size];
	}
	int IsEmpty() {
		if (top == -1) {
			return 1;
		}
		return 0;
	}
	void Push(char element) {
		top++;
		arr[top] = element;
	}
	char Pop() {
		char num;
		num = arr[top];
		top--;
		return num;
	}
};
int matching(char a,char b) {
	if (a == '(' && b == ')') {
		return 1;
	}
	if (a == '{' && b == '}') {
		return 1;
	}
	if (a == '[' && b == ']') {
		return 1;
	}
	return 0;
}
int Multiple_paranthesis(string exp) {
	int size = exp.length();
	Stack* ptr=new Stack(size);
	char poped_char;
	for (int i = 0; i < size; i++)
	{
		if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {
			ptr->Push(exp[i]);
		}
		if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
			if (ptr->IsEmpty()) {
				return 0;
			}
			poped_char = ptr->Pop();
			if (!matching(poped_char, exp[i])) {
				return 0;
			}
		}	
	}
	if (ptr->IsEmpty()) {
		return 1;
	}
	else
		return 0;
}
int main(){
	string exp = "{(2*4)+[8*9]}";
	if (Multiple_paranthesis(exp)) {
		cout << "The paranthesis is matching" << endl;
	}
	else
		cout << "The paranthesis is not matching" << endl;
	}