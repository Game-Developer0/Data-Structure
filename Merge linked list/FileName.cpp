#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
void display(Node* ptr) {
	
	while (ptr != NULL) {
		cout << "Element:" << ptr->data<<endl;
		ptr = ptr->next;
	}
	cout << "\n\n";
}
Node* Merge(Node* head, Node* head1) {
	Node* ptr = head;
	Node* q = head1;
	while (ptr->next != NULL) {
		ptr = ptr->next;
	}
	ptr->next = q;
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


	Node* Head1 = new Node();
	Node* second1 = new Node();
	Node* third1 = new Node();
	Node* fourth1 = new Node();
	Node* fifth1 = new Node();

	Head1->data = 89;
	Head1->next = second1;
	second1->data = 90;
	second1->next = third1;
	third1->data = 56;
	third1->next = fourth1;
	fourth1->data = 9;
	fourth1->next = fifth1;
	fifth1->data = 67;
	fifth1->next = NULL;
	cout << "The first linked list is" << endl;
	display(Head);
	cout << "The second linked list is" << endl;
	display(Head1);
	Head = Merge(Head, Head1);
	cout << "The merged  linked list is" << endl;
	display(Head);
}
