#include <iostream>

int main()
{
	// > < >= <= == !=
	int a, b;
	std::cin >> a >> b;
	if(a > b)
	{
		std::cout << a << " is greater than " << b << "\n";
		if( a / 2 > b)
		{
			std::cout << "... much greater";
		}
	}

	std::cout << "Goodbye";
}