#include <iostream>

int main()
{
	int by;
	std::cin>>by;
	int tariq = 2018-by;

	if(tariq < 0 || tariq > 120)
		std::cout<<"Incorrect Year";
	else 
		std::cout<<tariq;

}