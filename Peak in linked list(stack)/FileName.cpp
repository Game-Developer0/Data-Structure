#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
int IsEmpty(Node* top) {
	if (top == NULL) {
		return 1;
	}
	return 0;

}
int IsFull(Node* top) {
	Node* p = new Node();
	if (p == NULL) {
		return 1;
	}
	return 0;
}
Node* Push(Node* top,int x) {
	Node* n = new Node();
	n->data = x;
	n->next = top;
	return n;
}
Node* Pop(Node* top) {
	Node* n = top;
	int x = top->data;
	cout << "Popped Element is " << x << endl;
	top = top->next;
	return top;
}
void display(Node* top) {
	while (top != NULL) {
		cout << "Element:" << top->data << endl;
		top = top->next;
	}
}
int Peak(Node* top,int position) {
	Node* ptr = top;
	for (int i = 0; (i < position - 1 && ptr != NULL); i++) {
		ptr = ptr->next;

	}
	if (ptr != NULL) {
		return ptr->data;
	}
	return -1;

}
int StackTop(Node* top) {
	return top->data;
}
int StackBottom(Node* top) {
	Node* ptr = top;
	while (ptr != NULL) {
		ptr = ptr->next;

	}
	return ptr->data;
}
int main() {
	Node* Top = NULL;
	Top = Push(Top, 23);
	Top = Push(Top, 56);
	Top = Push(Top, 12);
	display(Top);
	for (int j = 1; j <=3 ; j++)
		cout << "The value at position " << j << " is" << Peak(Top,j) << endl;
}