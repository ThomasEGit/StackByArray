#include <iostream>
#include "StackByArray.h"

using namespace std;

StackByArray::StackByArray()
{
	top = -1;
}
bool StackByArray::isEmpty() const
{
	return (top < 0);
}

void StackByArray::push(int input)
{
	if (top == 9)
	{
		cout << "Stack is full" << endl;
		return;
	}
	top++;
	stackArray[top] = input;
}

void StackByArray::pop()
{
	if (top < 0)
	{
		cout << "Stack is empty" << endl;
		return;
	}
	top--;
}

int StackByArray::peak()
{
	if (top < 0)
	{
		cout << "Nothing to peak since emtpy" << endl;
		return -1;
	}
	return stackArray[top];
}