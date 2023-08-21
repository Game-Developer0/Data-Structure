#include<iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

Node* createnode(int value) {
	Node* newnode = new Node;
	newnode->data = value;
	newnode->next = NULL;
	return newnode;
}
Node* reverse(Node* head) {
	Node* current = head;
	Node* prev = NULL;
	Node* next=NULL;
	while (current != NULL) {
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	return prev;
}
Node* addlinkedlists(Node* list1, Node* list2) {
	Node* result = nullptr;
	Node* tail = nullptr;
	int carry = 0;

	while (list1 != nullptr || list2 != nullptr || carry != 0) {
		int sum = carry;
		if (list1 != nullptr) {
			sum += list1->data;
			list1 = list1->next;
		}
		if (list2 != nullptr) {
			sum += list2->data;
			list2 = list2->next;
		}
		sum += carry;
		carry = sum / 10;
		sum = sum % 10;

		Node* newNode = createnode(sum);

		if (result == nullptr) {
			result = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}
	}

	return result;
}

void display(Node* ptr) {
	while (ptr != NULL) {
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
}

int main() {
	Node* Head = new Node();
	Node* second = new Node();
	Node* third = new Node();
	Node* fourth = new Node();

	Head->data = 3;
	Head->next = second;
	second->data = 2;
	second->next = third;
	third->data = 5;
	third->next = NULL;
	

	Node* Head1 = new Node();
	Node* second1 = new Node();
	Node* third1 = new Node();
	Node* fourth1 = new Node();

	Head1->data = 3;
	Head1->next = second1;
	second1->data = 2;
	second1->next = third1;
	third1->data = 8;
	third1->next = NULL;

	Head = reverse(Head);
	Head1 = reverse(Head1);
	Node* sumlist = addlinkedlists(Head, Head1);
	display(sumlist);

	return 0;
}
