//Speeds up compilation by only needing the file once
#pragma once
// Allows input and output functions
#include <iostream>
//Includes "Node" header information
#include "Node.h"

// Template for Linked List class
template <typename T>
class LinkedList
{
// Access specificer. Lists data that can only be accessed by methods declared in public section of class
private:
	// Number of elements (length) in linked list
	int length;
	// Pointer to the head (first) node
	Node <T>* head;
// Access specifier. Lists data that can be directly accessed from anywhere object can be accessed
public:
	// Linked list constructor
	LinkedList();
	// Inserts data at head into linked list prototype
	void insertAtHead(T data);
	//Inserts data at tail (last node) into linked list prototype
	void insertAtTail(T data);
	// Display linked list prototype
	void display();
	// Get linked list length prototype
	int getLength();
	// Find node from data in linked list prototype
	void findNode(T data);
	// Delete node at position in linked list prototype
	void deleteNode(int pos);
	// Finds minimum value in linked list prototype
	void minimum();
	// Finds maximum value in linked list prototype
	void maximum();
};

// Template for linked list constructor
template <typename T>
LinkedList<T>::LinkedList() {
	// Length is initialized to 0
	length = 0;
	// Head is a null pointer
	head = NULL;
}

// Template for insert at head function
template <typename T>
void LinkedList<T>::insertAtHead(T number) {
	// Creates new generic node, which equals new generic node pointer
	Node <T>* currNode = new Node <T>();
	// Number is current node's data
	currNode->data = number;
	// Head is current node's next pointer
	currNode->next = head;
	// NULL is current node's previous pointer
	currNode->prev = NULL;
	// Executes if head is NULL
	if (head == NULL)
	{
		// Current node is head
		head = currNode;
		// Increments length by one
		length++;
	}
	// Executes if head is not NULL
	else
	{
		// Current node is head's previous pointer
		head->prev = currNode;
		// Current node is head
		head = currNode;
		// Increments length by one
		length++;
	}
}

// Template for insert at tail function
template <typename T>
void LinkedList<T>::insertAtTail(T number) {
	// Creates new generic node, which equals new generic node pointer
	Node <T>* currNode = new Node <T>();
	// Number is current node's data
	currNode->data = number;
	// NULL is current node's next pointer
	currNode->next = NULL;
	// NULL is current node's previous pointer
	currNode->prev = NULL;
	// Executes if head is NULL
	if (head == NULL)
	{
		// Current node is head
		head = currNode;
		// Increments length by one
		length++;
	}
	// Executes if head is not NULL
	else
	{
		// Head is set to traverse node pointer
		Node <T>* traverse = head;
		// Executes while traverse's next pointer is not null
		while (traverse->next != NULL)
		{
			// Traverse's next pointer is updated traverse
			traverse = traverse->next;
		}
		// Current node is traverse's next pointer
		traverse->next = currNode;
		// Traverse is current node's previous pointer
		currNode->prev = traverse;
		// Increments length by one
		length++;
	}
}

// Template for display function
template <typename T>
void LinkedList<T>::display() {
	// Head pointer is current node
	Node <T>* currNode = head;
	// Intializes i to 1
	int i = 1;
	// Executes until all elements are displayed
	while (currNode != NULL) {
		// Displays "i"th element then associated data
		std::cout << "Node Value " << i << "  " << currNode->data << std::endl;
		// Current node's next pointer is current node
		currNode = currNode->next;
		// Increments i by 1
		i++;
	}
}

// Template for get length function
template <typename T>
// Returns linked list length
int LinkedList<T>::getLength() { return length; }

// Template for find function
template <typename T>
void LinkedList<T>::findNode(T data) {
	// Head is current node
	Node <T>* currNode = head;
	// Executes while current node's next pointer is not NULL and current node's data is not equal to data
	while (currNode->next != NULL && currNode->data != data)
	{
		// Current node's next pointer is current node
		currNode = currNode->next;
	}
	// Executes if current node's data is equal to data
	if (currNode->data == data)
	{
		std::cout << "Data found.\n\n";
	}
	// Executes if current node's data is not equal to data
	else
	{
		std::cout << "Data not found.\n\n";
	}
}

// Template for delete function
template <typename T>
void LinkedList<T>::deleteNode(int pos) {
	// Head is current node
	Node <T>* currNode = head;
	// Executes if current node is NULL or position is 0 or less than 0
	if (currNode == NULL || pos <= 0)
	{
		std::cout << "List is empty, head is NULL, or invalid position.\n\n";
	}
	// Executes if position is 1
	else if (pos == 1)
	{
		// Current node's next pointer is head
		head = currNode->next;
		// NULL is current node's previous pointer
		currNode->prev = NULL;
		// Deletes current node
		delete currNode;
	}
	// Executes if position is 2 or greater
	else
	{
		// Executes until current node is not NULL and position is reached
		for (int i = 1; currNode != NULL && i < pos; i++)
		{
			// Current node's next pointer is current node
			currNode = currNode->next;
		}
		// Executes if current node's next pointer is NULL
		if (currNode == NULL)
		{
			std::cout << "Next pointer is NULL.\n\n";
		}
		// Executes if current node's next pointer is not NULL
		else if (currNode->next != NULL)
		{
			// Current node's next pointer is current node's previous pointer then next pointer
			currNode->prev->next = currNode->next;
			// Current node's previous pointer is current node's next pointer then previous pointer
			currNode->next->prev = currNode->prev;
			// Deletes current node
			delete currNode;
			// Decrements length by one
			length--;
		}
		// Executes if current node is last node
		else
		{	
			// NULL is current node's previous pointer then next pointer
			currNode->prev->next = NULL;
			// Deletes current node
			delete currNode;
			// Decrements length by one
			length--;
		}
	}
}

// Template for minimum function
template <typename T>
void LinkedList<T>::minimum() {
	// Head is new head
	Node <T>* newHead = head;
	// New head's data is generic minimum element data
	T minElement = newHead->data;
	// Executes while new head is not NULL
	while (newHead != NULL)
	{
		// Executes if minimum element's data is greater than new head's data
		if (minElement > newHead->data)
		{
			// New head's data is minimum element's data
			minElement = newHead->data;
		}
		// New head's next pointer is new head
		newHead = newHead->next;
	}
	std::cout << "\nMinimum value: " << minElement << std::endl;
}

// Template for maximum function
template <typename T>
void LinkedList<T>::maximum() {
	// Head is new head
	Node <T>* newHead = head;
	// New head's data is generic maximum element data
	T maxElement = newHead->data;
	// Executes while new head is not NULL
	while (newHead != NULL)
	{
		// Executes if maximum element's data is less than new head's data
		if (maxElement < newHead->data)
		{
			// New head's data is maximum element's data
			maxElement = newHead->data;
		}
		// New head's next pointer is new head
		newHead = newHead->next;
	}
	std::cout << "\nMaximum value: " << maxElement << std::endl;
}