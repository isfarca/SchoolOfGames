#include "stdafx.h"
#include "List.h"
#include <iostream>

using namespace std;

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