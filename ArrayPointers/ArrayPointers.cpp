// ArrayPointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

typedef int* IntPtr; // lets "IntPtr" define variables as an type integer pointer

int main()
{
	using namespace std;

	IntPtr p;
	int a[10]; // declare array of [10] 
	int index; // declare integer variable "index"

	for (index = 0; index < 10; index++)
		a[index] = index;

	p = a; // set 'a' to pointer 'p'

	for (index = 0; index < 10; index++)
		cout << p[index] << " ";
	cout << endl;

	for (index = 0; index < 10; index++)
		p[index] = p[index] + 1;

	for (index = 0; index < 10; index++)
		cout << a[index] << " ";
	cout << endl;

	return 0;
}
