#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
void display(Node* ptr) {
	while (ptr != NULL) {
		cout << "Element:" << ptr->data<< endl;
		ptr = ptr->next;
	}
	cout << "\n\n";
}
Node* insert_start(Node* head, int data) {
	Node* ptr = new Node();
	ptr->data = data;
	ptr->next = head;
	return ptr;
}
Node* inset_between(Node* head, int data, int index) {
	Node* ptr = new Node();
	Node* p = head;
	int i = 0;
	while (i != index - 1) {
		p = p->next;
		i++;
	}
	ptr -> data = data;
	ptr->next = p->next;
	p->next = ptr;
	return head;
}
int main() {
	Node* Head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	Node* fourth = new Node();

	Head->data = 34;
	Head->next = second;
	second->data = 54;
	second->next = third;
	third->data = 64;
	third->next = fourth;
	fourth->data = 34;
	fourth->next = NULL;

	display(Head);
	Head = insert_start(Head, 45);
	cout << "Inserting the element at the start" << endl;
	display(Head);
	cout << "\n\n";
	Head = inset_between(Head, 23, 3);
	display(Head);

}