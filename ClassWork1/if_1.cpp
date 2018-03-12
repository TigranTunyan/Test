#include <iostream>

int main()
{
	int a, b;
	std::cin>> a >> b;
	if(a > b)
	{
		std::cout << a << " is grater than "<<b;
		if(a / 2 > b)
		{
			std::cout <<"...much greater";
		}
	}

	std::cout <<"Good bye";
	


}