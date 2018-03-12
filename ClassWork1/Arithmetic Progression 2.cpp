#include <iostream>

int main()
{
	int n, an;
	int m, am;
	int k;
	std::cin>> n >> an;
	std::cin>> m >> am;
	std::cin>> k;

	int d = (am-an) / (m-n);
	int a1 = an - (n-1)*d;
	int ak = a1 + (k-1)*d;

	std::cout<<ak;
}
