//Find the middle of a given linked list

#include "LinkedList.h"


int getMiddle(LinkedList &l){

	node *fast = l.head, *slow= l.head;

	if(l.head == NULL)
		return 0;

	if(l.head->next == NULL)
		return l.head->data;

	while(fast!=NULL && fast->next!= NULL){
		slow = slow->next;
		fast = fast->next->next	;
	}

	return slow->data;

}

int main(){
	LinkedList l;
	std::vector<int> v = {1,2,3,4,5,6};

	l.create(v);

	l.display();

	std::cout << std::endl<< getMiddle(l) << std::endl;

	return 0;
}