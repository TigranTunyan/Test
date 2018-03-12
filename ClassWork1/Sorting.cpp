#include <iostream>
#include <cmath>

int main()
{
	int a, b, c;

   std::cin >> a >> b >> c;

   
   if(b < a)
   {
	   int t = a;
	   a=b;
       b=t;
   }

   
   if(c < a)
   {
	   int t = a;
	   a=c;
       c=t;
   }

   
   if(c < b)
   {
	   int t = b;
	   b=c;
       c=t;
   }


   std::cout << a << " " << b << " " << c;
}