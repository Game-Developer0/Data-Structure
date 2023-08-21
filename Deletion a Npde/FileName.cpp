#include<iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;

};
void display(Node* ptr) {
	while (ptr!=NULL)
	{
		cout << "Element:" << ptr->data << endl;
		ptr = ptr->next;
	}
}
Node* Deletion_start(Node* head) {
	Node* ptr = head;
	head = head->next;
	free(ptr);
	return head;
}
Node* Deletion_index(Node* head, int index) {
	Node* ptr = head;
	Node* q = head->next;
	for (int i = 0; i < index-1; i++)
	{
		ptr = ptr->next;
		q = q->next;
	}
	ptr->next = q->next;
	free(q);
	return head;
}
Node* Deletion_AnyElement(Node* head, int element) {
	Node* ptr = head;
	Node* q = head->next;
	while(q->data!=element && q->next!=NULL){
		ptr = ptr->next;
		q = q->next;
	}
	ptr->next = q->next;
	return head;
}
Node* Deletion_end(Node* head) {
	Node* ptr = head;
	Node* q = head->next;
	while (q->next != NULL) {
		ptr = ptr->next;
		q = q->next;
	}
	ptr->next = q->next;
	return head;
}
int main() {
	Node* Head = new Node();
	Node* second = new Node();
	Node* third= new Node();
	Node* fourth = new Node();

	Head->data = 23;
	Head->next = second;
	second->data = 83;
	second->next = third;
	third->data = 26;
	third->next = fourth;
	fourth->data = 54;
	fourth->next = NULL;
	display(Head);
	//cout<<"Deleting the first element of linked list"<<endl;
	//Head = Deletion_start(Head);
	//cout << "\n\n Deleting the given index element of linked list" << endl;
	//Head = Deletion_index(Head, 2);
	//cout << "\n\n Deleting the last  element of linked list" << endl;
	//Head = Deletion_end(Head);
	cout << "\n\n Deleting the given   element of linked list" << endl;
	Head = Deletion_AnyElement(Head, 26);
	display(Head);
}