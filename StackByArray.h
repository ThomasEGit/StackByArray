#ifndef STACKBYARRAY_H
#define STACKBYARRAY_H
#include <iostream>
using namespace std;

class StackByArray
{
private:
	int stackArray[10];
	int top;
public:
	StackByArray();
	bool isEmpty() const;
	void push(int input);
	void pop();
	int peak();
};
#endif



