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
Node* reverse_display(Node* head) {
	Node* current;
	Node* next;
	Node* prev=NULL;
	current = head;
	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev=current;
		current = next;
	}
	return prev;

}
bool palindrome(Node* head) {
	Node* ptr;
	Node* q = head;
	ptr = reverse_display(head);
	while (head != NULL) {
		if(q->data==ptr->data){
			return true;
		}
		
	}
}
int main() {
	Node* Head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	Node* fourth = new Node();
	Node* fifth = new Node();

	Head->data = 1;
	Head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 3;
	third->next = fourth;
	fourth->data = 2;
	fourth->next = fifth;
	fifth->data = 1;
	fifth->next = NULL;

	display(Head);
	Head = reverse_display(Head);
	display(Head);
	if (palindrome(Head))
		cout << "The linked list is a palindrome." << endl;
	else
		cout << "The linked list is not a palindrome." << endl;
}