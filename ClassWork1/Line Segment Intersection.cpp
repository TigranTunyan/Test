#include <iostream>
#include <cmath>

int main()
{
	double a1, b1, a2, b2;
	std::cin>>a1>>b1>>a2>>b2;

	if(a1 > b1)
	{
		double t = a1;
		a1 = b1;
		b1 = t;
	}

	if(a2 > b2)
	{
		double t = a2;
		a2 = b2;
		b2 = t;
	}

	if(a2 > a1 && a2 < b1)



}