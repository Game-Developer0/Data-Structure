#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
void display(Node* ptr) {
	while (ptr != NULL)
	{
		cout << "Element:" << ptr->data << endl;
		ptr = ptr->next;
	}
}
Node* insert(Node* head,int data) {
	Node* ptr = new Node();
	ptr->data = data;
	ptr->next = head;
	return ptr;
}
int main() {
	Node* Head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	Node* fourth = new Node();

	Head->data=23;
	Head->next = second;
	second->data = 33;
	second->next = third;
	third->data = 23;
	third->next = fourth;
	fourth->data = 34;
	fourth->next = NULL;
	Head = insert(Head, 45);
	display(Head);
}