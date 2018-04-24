#ifndef CLASSES_H

#define CLASSES_H

class Node
{
public:
	// Reference types
	Node *next;

	// Value types
	int value;

	/// <summary>
	/// Basic constructor.
	/// </summary>
	Node();

	/// <summary>
	/// Constructor with overloading.
	/// </summary>
	/// <param name="value">Integer value for managing.</param>
	Node(int value);
};

class List
{
private:
	// Reference types
	Node *first;
	Node *last;

	// Value types
	int count = 0;

public:
	/// <summary>
	/// Add a integer value in list.
	/// </summary>
	/// <param name="param">Integer value for adding in list.</param>
	void Add(int param);

	/// <summary>
	/// Get length of the list.
	/// </summary>
	void GetLength();

	/// <summary>
	/// Remove the last element in the list.
	/// </summary>
	void Remove();

	/// <summary>
	/// Remove the element at index.
	/// </summary>
	/// <param name="index">The index of the current element in list.</param>
	void RemoveAt(int index);

	/// <summary>
	/// Output all elements in the list.
	/// </summary>
	void PrintAllNodes();
};

class Stack
{
private:
	// Reference types
	Node *top;

public:
	/// <summary>
	/// Add the element in stack.
	/// </summary>
	/// <param name="param">Integer value for adding element in stack.</param>
	void Push(int param);

	/// <summary>
	/// Call the element from stack.
	/// </summary>
	void Pop();

	/// <summary>
	/// Show the element on the top of the stack.
	/// </summary>
	void Peek();
};

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