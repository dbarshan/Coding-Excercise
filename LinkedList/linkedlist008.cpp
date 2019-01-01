// Search an element in a linked list - recursive and non-recursive

#include "LinkedList.h"

bool search_recur_util(node *head, int key){
	
	if(head == NULL)
		return false;

	if(head->data == key)
		return true;

	return search_recur_util(head->next, key);
}

bool search_recur(LinkedList &l, int key){
	return search_recur_util(l.head, key);
}

bool search(LinkedList &l, int key){

	node *t = l.head;

	while( t != NULL){
		if(t->data == key)
			return true;
		t = t->next;
	}

	return false;
}

int main(){

	LinkedList l = {1,2,3,4,5,6,7,8,9,10};
	l.display();
	std::cout << std::endl << search(l,10);
	std::cout << std::endl << search(l,11);
	std::cout << std::endl << search_recur(l,10);
	std::cout << std::endl << search_recur(l,11);
	
	return 0;
}