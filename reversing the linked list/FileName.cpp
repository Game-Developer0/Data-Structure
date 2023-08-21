#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
void display(Node* ptr) {

	while (ptr != NULL) {
		cout << "Element:" << ptr->data << endl;
		ptr = ptr->next;
	}
	cout << "\n\n";
}
Node* reverse(Node* head) {
	Node* current = head;
	Node* prev = NULL;
	Node* next = NULL;
	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
	return head;
}
int main() {
	Node* Head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	Node* fourth = new Node();
	Node* fifth = new Node();

	Head->data = 56;
	Head->next = second;
	second->data = 46;
	second->next = third;
	third->data = 76;
	third->next = fourth;
	fourth->data = 23;
	fourth->next = fifth;
	fifth->data = 45;
	fifth->next = NULL;
	cout << "Given linked list" << endl;
	display(Head);

	Head=reverse(Head);
	cout << "\n\nReversed linked list" << endl;
	display(Head);
}