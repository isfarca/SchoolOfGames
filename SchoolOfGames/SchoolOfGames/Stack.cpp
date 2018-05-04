#include "stdafx.h"
#include "Stack.h"
#include <iostream>

using namespace std;

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