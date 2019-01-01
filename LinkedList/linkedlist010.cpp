//Given a Linked List and a number n, write a function that returns the value at the n’th node from end of the Linked List.

#include "LinkedList.h"

int length(LinkedList &l){
	node *t = l.head;
	int count = 0;
	while(t!=NULL){
		t = t->next;
		count++;
	}
	return count;
}

int nthFromLast(LinkedList &l, int n){

	if ( l.head == NULL)
		return 0;

	int len = length(l);
	if(len <= n)
		return l.head->data;

	node *fast = l.head;

	for(int i=0;i<n; i++){
		fast = fast->next;
	}

	node *slow = l.head;

	while(fast!=NULL){
		slow = slow->next;
		fast = fast->next;
	}
	return slow->data;
}

int main(){

	LinkedList l;
	std::vector<int> dataVector = {20,4,35,15};
	l.create(dataVector);
	l.display();
	std::cout << std::endl;
	std::cout << nthFromLast(l,3);
	return 0;
}