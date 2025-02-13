#include <iostream>
#include <string>
float a;
float b;
int main()
{
	printf("\nDigame cual es el precio base del articulo\n");
	std::cin>>a;
	printf("\nDigame cual es el descuento que tiene el articulo\n");
	std::cin>>b;
printf("\nEl valor final del articulo es\n");
b*=a;
b/=100;
a-=b;
std::cout <<a;

	return 0;
}
