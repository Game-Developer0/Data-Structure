#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
	
};
void display(Node* Head) {
	while (Head != NULL) {
		cout << "Element:" << Head->data << endl;;
		Head = Head->next;
	}
}
Node* insert_start(Node* head,int element) {
	Node* ptr = new Node();
	ptr->data = element;
	ptr->next = head;
	return ptr;	
}
Node* insert_end(Node* head, int element) {
	// passing the parameter head by pointer,
	//which means that the address of the original variable is passed to the function
	Node* ptr = new Node();
	Node* p = head;//The p pointer is a reference to the linked list,
	//so when we make changes to the p pointer, we are actually making changes to the linked list which means head
	while (p->next != NULL) {
		p = p->next;
	}
	ptr->data = element;
	ptr->next = NULL;
	p->next = ptr;
	return head;


}

int main() {
	Node* Head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	Node* fourth = new Node();
	Node* fifth = new Node();
	Head->data = 34;
	Head->next = second;
	second->data = 12;
	second->next = third;
	third->data = 94;
	third->next = fourth;
	fourth->data = 56;
	fourth->next = fifth;
	fifth->data = 66;
	fifth->next = NULL;
	Head=insert_start(Head, 23);
	Head = insert_end(Head, 45);
	display(Head);
}