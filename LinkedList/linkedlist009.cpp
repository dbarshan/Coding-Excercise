// n-th Node of a linked list

#include "LinkedList.h"

int nthNode(LinkedList &l, int n){

	if(l.head == NULL)
		return 0;
	int val;
	node *t = l.head;
	for(int i=0; i<n && t!=NULL; i++, t=t->next){
		val = t->data;
	}
	return val;
}

int main(){

	LinkedList l = {1,2,3,4,5};
	l.display();

	
	return 0;
}