#ifndef QUEUE_H

#define QUEUE_H

#include "Node.h"

class Queue
{
private:
	// Reference types
	Node *front;
	Node *rear;

public:
	/// <summary>
	/// Insertion of a new element to the queue.
	/// </summary>
	/// <param name="param">Integer value for insertion in the queue.</param>
	void Enqueue(int param);

	/// <summary>
	/// Deletion of an existing element from the queue.
	/// </summary>
	void Dequeue();
};

#endif