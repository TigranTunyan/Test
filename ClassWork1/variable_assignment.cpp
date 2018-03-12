#include <iostream>

int main()
{
	int a = 4;
	int b = 10;
	a = b;
	b = 12;
	std::cout << a; //prints 10

	b = a + b; //b becomes 22;

	a = a + 1; //increments a
}