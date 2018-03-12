# include <iostream>

int main()
{
	int a, b;
	std::cin>> a >> b;
	int s = a * b;
	std::cout<< s/2 << "." << s%2*5;
}