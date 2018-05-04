#include "stdafx.h"
#include "Node.h"

using namespace std;

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