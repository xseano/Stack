// LinkedList.h
// oberoi, sean
// ssoberoi

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class LinkedList
{
	public:
		LinkedList();
		~LinkedList();

		void clear(); // clear the data structure
		void showLinkage(); // display the structure of the node pointers

		int getCurrentSize(); // size or length of Nodes in the list
		int getFrequencyOf(T data); // how many Nodes contain specified data

		bool isEmpty(); // is the data structure empty
		bool contains(T data); // check if Node with data exists

		void addNode(T data); // add node
		void removeNode(T data); // remove node

		vector<T> toVector(); // return data in a vector (e.g. to print out)
		vector<T> reverseVector(); // return reversed data in a vector
};

#include "LinkedList.cpp"

#endif
