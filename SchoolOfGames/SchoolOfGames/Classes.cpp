#include "stdafx.h"
#include "Classes.h"
#include <iostream>

using namespace std;

// ----- Node -----

// Basic constructor.
Node::Node()
{
	next = NULL;
	this->value = 0;
}

// Constructor with overloading.
Node::Node(int value)
{
	next = NULL;
	this->value = value;
}

// ----- List -----

// Add a integer value in list.
void List::Add(int param)
{
	// Declare variables
	Node *newNode = new Node(param);

	if (first == NULL)
		first = newNode;
	else
	{
		last = first;

		while (last->next != NULL)
			last = last->next; // Find last element.

		last->next = newNode; // Add element at end of list.
	}

	this->count++;
}

// Get length of the list.
void List::GetLength()
{
	cout << "The length from list is " << " ' " << this->count << " '." << endl;
}

// Remove the last element in the list.
void List::Remove()
{
	// Declare variables
	Node *current = first;

	while (current->next != NULL)
	{
		// Find last element.
		last = current;
		current = current->next;
	}

	cout << " ' " << last->next->value << " ' " << " is removed." << endl;
	*last->next = NULL;

	this->count--;
}

// Remove the element at index.
void List::RemoveAt(int index)
{
	// Declare variables
	int i = 0;
	Node *current = first;
	Node *previous = current;

	while (i <= index)
	{
		if (i == index)
		{
			previous->next = current->next;

			cout << "For the index " << " ' " << index << " ' is ' " << current->value << " ' removed." << endl;
			*current = NULL;
		}
		else
		{
			previous = current;
			current = current->next;
		}

		i++;
	}

	this->count--;
}

// Output all elements in the list.
void List::PrintAllNodes()
{
	// Declare variables
	Node *current = first;

	while (current != NULL)
	{
		cout << "current->value: ' " << current->value << " '." << endl;
		current = current->next;
	}
}

// ----- Stack -----

// Adding an element to the stack.
void Stack::Push(int param)
{
	// Declare variables
	Node *newNode = new Node(param);

	if (&top == NULL)
		newNode->next = NULL;
	else
		newNode->next = top;

	top = newNode;
	cout << "' " << param << " ' pushed to stack." << endl;
}

// Removing an element from th stack.
void Stack::Pop()
{
	if (&top == NULL)
	{
		cout << "Stack Underflow. Deletion not possible!" << endl;

		return;
	}

	cout << "Item popped is ' " << top->value << " '." << endl;
	top = top->next;
}

// Show the element on the top of the stack.
void Stack::Peek()
{
	if (&top == NULL)
	{
		cout << "Stack Underflow" << endl;

		return;
	}

	cout << "' " << top->value << " ' is on the top of stack." << endl;
}

// ----- Queue -----

// Insertion of a new element to the queue.
void Queue::Enqueue(int param)
{
	// Declare variables
	Node *newNode = new Node(param);

	// If queue is empty, then new node is front and rear both.
	if (this->rear == NULL)
		this->front = this->rear = newNode;
	else
	{
		// At the new node at the end of queue and change rear.
		this->rear->next = newNode;
		this->rear = newNode;
	}

	cout << "' " << param << " ' inserted into Queue." << endl;
}

// Deletion of an existing element from the queue.
void Queue::Dequeue()
{
	// Declare variables
	Node *temp;

	// If queue is empty, return NULL.
	if (this->front == NULL)
	{
		cout << "The Queue is empty!" << endl;
		return;
	}

	// Store previous front and move front one node ahead.
	temp = this->front;
	this->front = this->front->next;

	// If front becomes NULL, then change rear also as NULL.
	if (this->front == NULL)
		this->rear = NULL;

	cout << "Item deleted is ' " << temp->value << " '." << endl;
}