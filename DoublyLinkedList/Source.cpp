// Allows input and output functions
#include <iostream>
//Includes "DoublyLinkedList" header information.
#include "DoublyLinkedList.h"

// Main function
int main()
{
	// Creates a doubly linked list of integer type
	LinkedList<int> list;
	// Loops 5 times
	for (int i = 0; i < 5; ++i)
	{
		// Adds a random integer at head
		list.insertAtHead(rand() % 100);
	}
	// Displays list
	list.display();
	// Stores list's length
	int len = list.getLength();
	// Displays list's length
	std::cout << "\n# of nodes: " << len << std::endl << std::endl;
	// Loops 5 times
	for (int i = 5; i < 20; ++i)
	{
		// Adds a random integer at tail
		list.insertAtTail(rand() % 100);
	}
	// Displays list
	list.display();
	// Stores list's new length
	int newLen = list.getLength();
	// Displays list's new length
	std::cout << "\n# of nodes: " << newLen << std::endl << std::endl;
	// Tells user if node value is or is not found
	list.findNode(41);
	// Deletes node at given position (1 - max length)
	list.deleteNode(11);
	// Displays list
	list.display();
	// Display's list minimum value
	list.minimum();
	// Display's list maximum value
	list.maximum();
	// Returns to the main function
	return 0;
}