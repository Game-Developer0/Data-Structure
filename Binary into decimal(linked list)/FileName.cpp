#include<iostream>
#include<cmath>
using namespace std;
class Node {
public:
	int data;
	Node* next;
};
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
	return prev;
}
void convert(Node* ptr) {
	int sum=0;
	int i = 0;
	int convert;
	while (ptr != NULL) {
		convert = pow(2, i) * ptr->data;
		ptr = ptr->next;
		sum += convert;
		i++;
	}
	cout << sum;
}
void display(Node* ptr){
	while(ptr != NULL) {
		cout << "Element:" << ptr->data<<endl;
		ptr = ptr->next;
}
}
int main() {
	Node* Head = new Node;
	Node* second = new Node;
	Node* third = new Node;
	

	Head->data = 1;
	Head->next = second;
	second->data = 0;
	second->next = third;
	third->data = 1;
	third->next = NULL;
	Head = reverse(Head);
	display(Head);
	convert(Head);

}