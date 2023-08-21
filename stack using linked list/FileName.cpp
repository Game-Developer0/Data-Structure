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
int IsFull(Node* ptr) {
	Node* p = new Node;
	if (p == NULL) {
		return 1;
	}
	return 0;
}
Node* push(Node* top,int x) {
	if (IsFull(top)) {
		cout << "Stack over flow" << endl;
	}
	else {
		Node* n = new Node();
		n->next = top;
		n->data = x;
		return n;
	}
}
int Pop(Node*& top) {
	if (IsEmpty(top)) {
		cout << "Stack underflow" << endl;
	}
	else {
		Node* n = top;
		int x = top->data;
		top = top->next;
		free(n);
		return x;
	}


}
void display(Node* top) {
	while (top != NULL) {
		cout << "Element:" << top->data << endl;
		top = top->next;
	}
}

int main() {
	Node* top = NULL;
	top=push(top, 13);
	top=push(top, 34);
	top=push(top, 67);
	display(top);
	cout << "Popped elements is" << Pop(top)<<endl;
	display(top);

}