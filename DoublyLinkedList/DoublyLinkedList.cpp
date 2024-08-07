////Includes "DoublyLinkedList" header information.
//#include "DoublyLinkedList.h"
//
//// Template for linked list constructor
//template <typename T>
//LinkedList<T>::LinkedList() {
//	// Length is initialized to 0
//	length = 0;
//	// Head is a null pointer
//	head = NULL;
//}
//
//// Template for insert at head function
//template <typename T>
//void LinkedList<T>::insertAtHead(T number) {
//	// Creates a new generic node then assigns it to a new generic node pointer
//	Node <T>* newNode = new Node <T>();
//	// Number is assigned to the new node pointer's data
//	newNode->data = number;
//	// Current head pointer is assigned to the new node pointer's next pointer
//	newNode->next = this->head;
//	// New node is assigned to the head
//	head = newNode;
//	// Increments the length by one
//	length++;
//}
//
//// Template for insert at tail function
//template <typename T>
//void LinkedList<T>::insertAtTail(T number) {
//	// Creates a new generic node then assigns it to a new generic node pointer
//	Node <T>* newNode = new Node <T>();
//	// Number is assigned to the new node pointer's data
//	newNode->data = number;
//	// NULL is assigned to the new node pointer's next pointer
//	newNode->next = NULL;
//	// Executes if the head is NULL
//	if (head == NULL)
//	{
//		// New node is assigned to the head
//		head = newNode;
//	}
//	// Executes if the head is not NULL
//	else
//	{
//		// Assigns the head to the new head pointer
//		Node <T>* newHead = head;
//		// Executes while the new head's next pointer is not null
//		while (newHead->next != NULL)
//		{
//			// The new head's next pointer is assigned to the new head
//			newHead = newHead->next;
//		}
//		// New node is assigned to new head's next pointer
//		newHead->next = newNode;
//	}
//	// Increments the length by one
//	length++;
//}
//
//// Template for display function
//template <typename T>
//void LinkedList<T>::display() {
//	// Current head pointer is assigned to the current node pointer
//	Node <T>* curr = this->head;
//	// Initalizes i to 1
//	int i = 1;
//	// Executes until all elements are displayed
//	while (curr) {
//		// Displays "i"th element then the associated data
//		std::cout << "Node Value " << i << "  " << curr->data << std::endl;
//		// Current node's next pointer is assigned to the current node pointer
//		curr = curr->next;
//		// Increments i by 1
//		i++;
//	}
//}
//
//// Template for getLength function
//template <typename T>
//// Returns linked list length
//int LinkedList<T>::getLength() { return length; }
//
//
//// Template for find function
//template <typename T>
//void LinkedList<T>::findNode(T data) {
//	// Assigns the head to the new head pointer
//	Node <T>* newHead = head;
//	// Executes while the new head is not NULL and new head data is not data
//	while (newHead != NULL && newHead->data != data)
//	{
//		// The new head's next pointer is assigned to the new head
//		newHead = newHead->next;
//	}
//	// Executes if new head is NULL
//	if (newHead == NULL)
//	{
//		std::cout << "Data not found.\n\n";
//	}
//	// Executes if new head is not NULL
//	else
//	{
//		std::cout << "Data found.\n\n";
//	}
//}
//
//// Template for delete function
//template <typename T>
//void LinkedList<T>::deleteNode(int pos) {
//	// Assigns the head to the node before deletion pointer
//	Node <T>* nodeBeforeDeletion = head;
//	// Stores iterator
//	int i;
//	// Executes until is the node position
//	for (i = 0; i < pos - 1; i++)
//	{
//		// The new head's next pointer is assigned to the new head
//		nodeBeforeDeletion = nodeBeforeDeletion->next;
//	}
//	// Assigns the node before deletion next pointer to node after deletion pointer
//	Node <T>* nodeAfterDeletion = nodeBeforeDeletion->next;
//	// Node after deletion next pointer is assigned to node before deletion next pointer
//	nodeBeforeDeletion->next = nodeAfterDeletion->next;
//	// Deletes the node at the given position
//	delete nodeAfterDeletion;
//}
//
//// Template for minimum function
//template <typename T>
//void LinkedList<T>::minimum() {
//	// Assigns the head to the new head pointer
//	Node <T>* newHead = head;
//	// New head's data is assigned to generic minimum element data
//	T minElement = newHead->data;
//	// Executes while the new head is not NULL
//	while (newHead != NULL)
//	{
//		// Executes if the minimum element's data is greater than the new head's data
//		if (minElement > newHead->data)
//		{
//			// New head's data is assigned to minimum element's data
//			minElement = newHead->data;
//		}
//		// New head's next pointer is assigned to the head
//		newHead = newHead->next;
//	}
//	std::cout << "\nMinimum value: " << minElement << std::endl;
//}
//
//// Template for maximum function
//template <typename T>
//void LinkedList<T>::maximum() {
//	// Head's data is assigned to generic maximum element data
//	T maxElement = head->data;
//	// Executes while the head is not NULL
//	while (head != NULL)
//	{
//		// Executes if the maximum element's data is greater than the head's data
//		if (maxElement < head->data)
//		{
//			// Head's data is assigned to maximum element's data
//			maxElement = head->data;
//		}
//		// The head's next pointer is assigned to the head
//		head = head->next;
//	}
//	std::cout << "\nMaximum value: " << maxElement << std::endl;
//}