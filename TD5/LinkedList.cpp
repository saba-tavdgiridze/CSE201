#include "LinkedList.hpp"
#include<iostream>

///CLASS ListNode

ListNode::ListNode(int data,ListNode *next)
{
	this->data = data;
	this->next = next;
}

ListNode::~ListNode()
{
	if(this->next != NULL)
		delete this->next;
}

///CLASS LinkedList


LinkedList::LinkedList()
{
	first = last = NULL;
}

LinkedList::~LinkedList()
{
	delete first;
	delete last;
}

void LinkedList::append(int d)
{
	if(first == NULL){
		///last = NULL
		first = last = new ListNode(d);
	}
	else{
		last->next = new ListNode(d);
		last = last->next;
	}
}

void LinkedList::prepend(int d)
{
	if(first == NULL){
		///last = NULL
		first = last = new ListNode(d);
	}
	else{
		ListNode *temp = new ListNode(d,first);
		first = temp;
	}
}


void LinkedList::display()
{
	if(first == NULL){
		std::cout<<"\n";
	}
	else{
		ListNode *iter = first;
		while(iter!=NULL){
			std::cout<<(iter->data)<<" ";
			iter = iter->next;
		}
		std::cout<<"\n";
	}
}

LinkedList* LinkedList::filterSmaller(int threshold)
{
	LinkedList *res = new LinkedList();

	ListNode *iter = first;
	while(iter!=NULL){
		if(iter->data <= threshold){
			res->append(iter->data);
		}
		iter = iter->next;
	}
	return res;
}


