#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
void display(Node* ptr) {
	while(ptr!=NULL){
	cout << "Element:" << ptr->data << endl;
	ptr = ptr->next;
}}
Node* insert_start(Node* head, int data) {
	Node* ptr = new Node();
	ptr->data = data;
	ptr->next = head;
	return ptr;
}
Node* insert_between(Node* head, int data, int index) {
	Node* ptr = new Node();
	Node* p = head;
	int i = 0;
	while (i != index - 1) {
		p = p->next;
		i++;
	}
	ptr->data = data;
	ptr->next = p->next;
	p->next = ptr;
	return head;
}
Node* insert_end(Node* head, int data) {
	// passing the parameter head by pointer,
	//which means that the address of the original variable is passed to the function
	Node* ptr = new Node();
	Node* p = head;//The p pointer is a reference to the linked list,
	//so when we make changes to the p pointer, we are actually making changes to the linked list which means head
	int i = 0;
	while (p->next != NULL) {
		p = p->next;
		i++;
	}
	ptr->data = data;
	ptr->next = NULL;
	p->next = ptr;
	return head;
}
Node* inset_after(Node* head, Node* prevNode, int data) {
	Node* ptr = new Node();
	ptr->data = data;
	ptr->next = prevNode->next;
	prevNode->next = ptr;
	return head;
}
int main() {
	Node* Head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	Node* fourth = new Node();

	Head->data = 34;
	Head->next = second;
	second->data = 124;
	second->next = third;
	third->data = 234;
	third->next = fourth;
	fourth->data = 12;
	fourth->next = NULL;
	cout << "The element in linked list are" << endl;
	display(Head);
	Head = insert_start(Head, 45);
	cout << "\n\nThe element in linked list when we insert an element at start" << endl;
	display(Head);
	Head = insert_between(Head, 35, 3);
	cout << "\n\nThe element in linked list when we insert an element between" << endl;
	display(Head);
	Head = insert_end(Head, 05);
	cout << "\n\nThe element in linked list when we insert an element at end" << endl;
	display(Head);
	Head = inset_after(Head, third, 9);
	cout << "\n\nThe element in linked list when we insert an element after a node" << endl;
	display(Head);
}