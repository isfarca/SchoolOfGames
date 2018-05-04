#ifndef NODE_H

#define NODE_H

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

#endif