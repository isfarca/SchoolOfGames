// SchoolOfGames.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include "Font.h"
#include "Printer.h"
#include "List.h"
#include "Stack.h"
#include "Queue.h"
#include <stdlib.h>
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	// Declare variables
	int randomNumber;
	Printer printer = Printer();
	List list = List();
	Stack stack = Stack();
	Queue queue = Queue();

	// Modify the text.
	SetTextColor(7);
	SetTextSize(16);

	// Basic output.
	cout << "School of Games\n" << endl;

	// Constructor.
	printer.Print();
	printer = Printer("Sinzig", "Alexander");
	printer.Print();

	srand(time(NULL));

	cout << "\n-----LIST-----" << endl;

	for (int i = 0; i < 5; i++)
	{
		randomNumber = rand() % ((100 - 0) + 1) - 0;

		list.Add(randomNumber);
	}

	list.GetLength();
	list.PrintAllNodes();
	list.Remove();
	list.RemoveAt(2);

	cout << "\n-----STACK-----" << endl;

	for (int i = 0; i < 5; i++)
	{
		randomNumber = rand() % ((100 - 0) + 1) - 0;

		stack.Push(randomNumber);
	}

	stack.Pop();
	stack.Peek();

	cout << "\n-----QUEUE-----" << endl;

	for (int i = 0; i <= 5; i++)
	{
		randomNumber = rand() % ((100 - 0) + 1) - 0;

		queue.Enqueue(randomNumber);
	}

	queue.Dequeue();

	// Waits for the next input of the user.
	cin.get();

    return 0;
}