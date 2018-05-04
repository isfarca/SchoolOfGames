#include "stdafx.h"
#include "Queue.h"
#include <iostream>

using namespace std;

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