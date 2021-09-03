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
	++top;
	stackArray[top] = input;
}

void StackByArray::pop()
{

}

int StackByArray::peak()
{
	return top;
}