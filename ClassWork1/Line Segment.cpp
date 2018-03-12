#include <iostream>
#include <cmath>

int main()
{
	double x1, y1, x2, y2;
	std::cin>>x1>>y1>>x2>>y2;

	double x = pow((x1 - x2),2);
	double y = pow((y1 - y2),2);
	
	std::cout<<sqrt(x+y);
}