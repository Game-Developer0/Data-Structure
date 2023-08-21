#include<iostream>
#include<cmath>
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
}
Node* Middle_linked(Node* head){
	Node* current = head;
	int count = 0;
	while (current != NULL) {
		count++;
		current = current->next;
	}
	
	int middle = count/2;
	current=head;
	for (int i = 0; i < middle; i++) {
		current = current->next;
	}
	return current;

}
int main() {
	Node* Head = new Node;
	Node* second = new Node;
	Node* third = new Node;
	Node* fourth = new Node;
	Node* fifth = new Node;


	Head->data = 24;
	Head->next = second;
	second->data = 67;
	second->next = third;
	third->data = 12;
	third->next = fourth;
	fourth->data = 90;
	fourth->next = fifth;
	fifth->data = 45;
	fifth->next = NULL;
	
	
	Head=Middle_linked(Head);
	display(Head);
	

}