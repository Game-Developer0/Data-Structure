#include<iostream>
#include<string>
using namespace std;
class Stack {
public:
	int size;
	int top;
	int* record;
	Stack() {

	}
	Stack(int size) {
		this->size = size;
		top = -1;
		record = new int[size];
	}
	int IsFull() {
		if (top == size - 1) {
			return 1;
		}
		return 0;
	}
	int IsEmpty() {
		if (top ==-1) {
			return 1;
		}
		return 0;
	}
	void Push(int element) {
		if (IsFull()) {
			cout << "Stack overflow" << endl;
		}
		else {
			top++;
			record[top] = element;
		}

	}
	int Pop() {
		if (IsEmpty()) {
			cout << "Stack underflow" << endl;
		}
		else {
			int num;
			num = record[top];
			top--;
			return num;
		}
	}

};
void Score(Stack* ptr, string arr[8]) {
	int num, num1, num2;
	
	for (int i = 0; i < 8; i++) {
		if (arr[i] == "C") {
			ptr->Pop();
		}
		else if (arr[i] == "D") {
			num = 2 * ptr->record[ptr->top];
			ptr->Push(num);
		}
		else if (arr[i] == "+") {
			int top1 = ptr->top;
			num1 = ptr->record[top1];
			num1 += ptr->record[top1-1];

			ptr->Push(num1);
		}
		else {
			num = std::stoi(arr[i]);
			ptr->Push(num);
		}
	}
}

void sum(Stack* ptr) {
	int sum = 0;
	while (!ptr->IsEmpty()) {
		sum += ptr->Pop();
	}
	cout << "The sum is: " << sum << endl;
}

int main() {
	Stack* ptr = new Stack(8);
	string arr[8] = { "5","-2","4","C","D","9","+","+" };
	Score(ptr, arr);
	sum(ptr);

}