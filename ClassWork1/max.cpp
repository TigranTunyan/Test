#include <iostream>

int main()
{
	int a, b;
	std::cin >> a >> b;
	int max = a;
	if(b > a)
		max = b;
	
	std::cout << max;
}