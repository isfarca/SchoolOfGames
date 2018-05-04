#ifndef STACK_H

#define STACK_H

#include "Node.h"

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

#endif