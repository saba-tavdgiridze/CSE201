#include<iostream>
#include<cstdlib>

#ifndef LINKEDLIST_HPP_INCLUDED
#define LINKEDLIST_HPP_INCLUDED

class LinkedList;

class ListNode{
	private:
		int data;
		ListNode *next;
	public:
		friend LinkedList;
		ListNode(int data,ListNode *next = NULL);
		~ListNode();
};


class LinkedList{
	private:
		ListNode *first,*last;
	public:
		LinkedList();
		~LinkedList();

		void display();
		void append(int d);
		void prepend(int d);

		LinkedList* filterSmaller(int threshold);

};

#endif // LINKEDLIST_HPP_INCLUDED
