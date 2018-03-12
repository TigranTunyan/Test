#include <iostream>
#include <cmath>

int main()
{
	int s1, s2, s3;
	std::cin>>s1>>s2>>s3;

	int max = s1;
	if(s2 > max)
		max = s2;
	if(s3 > max)
		max = s3;

	int min = s1;
	if(s2 < min)
		min = s2;
	if(s3 < min)
		min = s3;


	std::cout<<max-min;

}