// Length of a linked list - recursive and non-recursive

#include "LinkedList.h"

int length(LinkedList &l){
	int len = 0;

	node *t = l.head;
	while( t != NULL){
		len++;
		t = t->next;

	}
	return len;
}

int length_recur_util(node *head){

	if( head == NULL)
		return 0;

	return (1 + length_recur_util(head->next));
}

int length_recur(LinkedList &l){
	return length_recur_util(l.head);
}

int main(){

	LinkedList l = {1,2,3,4,5,6,7,8,9,0};
	l.display();
	std::cout << std::endl << length(l); 
	std::cout << std::endl << length_recur(l);
	return 0;
}