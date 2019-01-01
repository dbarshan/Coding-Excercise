#include "LinkedList.h"

LinkedList::LinkedList(){

}

LinkedList::LinkedList(std::initializer_list<int> parameters){
	for(std::initializer_list<int>::iterator it = parameters.begin(); it != parameters.end(); it++){
		push_back(*it);
	}
}

LinkedList::~LinkedList(){

}

void LinkedList::create(int d){
	head = new node;
	head->data = d;
	head->next = NULL;
}

void LinkedList::create(int dataArray[], int n){

	for(int i=0; i<n; i++){
		push_back(dataArray[i]);
	}
}

void LinkedList::create(std::vector<int> dataVector){

	for(std::vector<int>::iterator it = dataVector.begin(); it!= dataVector.end(); it++){

		push_back(*it);

	}
}

void LinkedList::display(){

	node *t = head;

	while(t!=NULL){
		std::cout << t->data << " " ;
		t = t->next;
 	}

}

void LinkedList::push_back(int d){

	node *newNode = new node;
	newNode->data = d;
	newNode->next = NULL;

	if(head == NULL){
		head = newNode;
	}
	else{
		node *t = head;
		while(t->next != NULL){
			t = t->next;
		}

		t->next = newNode;
	}
}

std::vector<int> LinkedList::getData(){
	std::vector<int> retVector;

	node *t = head;
	while(t!= NULL){
		retVector.push_back(t->data);
	}
	return retVector;
}
