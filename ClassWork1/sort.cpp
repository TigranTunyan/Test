#include <iostream>


int main()
{
	int a, b;
	std::cin >> a >> b;
	
	if(a > b)
	{
		int t = a;
		a = b;
		b = t;
	}
	
	std::cout << a << " " << b;
}