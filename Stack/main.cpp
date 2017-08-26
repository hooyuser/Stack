#include "stack.h"
#include <iostream>


int main()
{
	using namespace std;

	Stack<char> chStack;
	chStack.push('1');
	chStack.push('2');
	chStack.push('3');

	cout << chStack.pop();
	cout << chStack.top();
	cout << chStack.pop();
	cout << chStack.top();

	cin.get();
	return 0;
}