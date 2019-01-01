#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <vector>
#include <initializer_list>

struct node{
	int data;
	struct node *next;
};

class LinkedList{
public:
	struct node *head = NULL;
public:
	LinkedList();
	LinkedList(std::initializer_list<int> parameters);
	~LinkedList();
	void create(int d);
	void create(int dataArray[], int n);
	void create(std::vector<int> dataVector);
	void display();
	void push_back(int d);
	std::vector<int> getData();
};

#endif