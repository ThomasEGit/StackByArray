#include <iostream>
#include "StackByArray.h"
using namespace std;

int main()
{
	StackByArray t;
	t.push(5);
	cout << t.peak() << endl;
	t.pop();
	cout << t.peak() << endl;
	t.pop();
	return 0;
}