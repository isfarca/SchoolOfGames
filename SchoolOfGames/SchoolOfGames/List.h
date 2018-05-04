#ifndef LIST_H

#define LIST_H

#include "Node.h"

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

#endif