#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
	Node* prev;
};
void display(Node* ptr) {
	cout << "Displaying the doubley linked list"<<endl;
	while (ptr != NULL) {

		cout << "Element:" << ptr->data << endl;
		ptr = ptr->next;
	}
}
void display_reverse(Node* ptr) {
	cout << "Displaying the doubley linked list reverse" << endl;
	while (ptr != NULL) {

		cout << "Element:" << ptr->data << endl;
		ptr = ptr->prev;
	}
}
int main() {
	Node* Head = new Node();
	Node* first = new Node();
	Node* second = new Node();
	Node* third = new Node();
	Node* fourth = new Node();

	Head->data = 23;
	Head->next = first;
	Head->prev = NULL;
	first->data = 45;
	first->next = second;
	first->prev = Head;
	second->data = 78;
	second->next = third;
	second->prev = first;
	third->data = 89;
	third->next = fourth;
	third->prev = second;
	fourth->data = 34;
	fourth->next = NULL;
	fourth->prev = third;

	display(Head);

	display_reverse(fourth);
}