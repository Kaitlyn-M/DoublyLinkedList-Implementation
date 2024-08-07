//Speeds up compilation by only needing the file once
#pragma once

// Template for Node class
template <typename T>
class Node
{
// Access specifier. Lists data that can be directly accessed from anywhere the object can be accessed
public:
	// Pointer to next node
	Node* next;
	// Pointer to previous node
	Node* prev;
	// Generic data variable
	T data;
	// Node's position
	int pos;
};