
#include <iostream>
#include <string>
float a;
float b;
int c;
int d;
int main()
{
	printf("\n Dame un número\n");
	std::cin >>a;
	printf("\n Dame un número\n");
	std::cin >>b;
printf("\n La suma entre el primer número y el segundo es:\n");
a+=b;
std::cout <<a;
printf("\n La resta entre el primer número y el segundo es:\n");
a-=b;
std::cout <<a;
printf("\n La multiplicación entre el primer número y el segundo es:\n");
a*=b;
std::cout <<a;
printf("\n La división entre el primer número y el segundo es:\n");
a/=b;
std::cout <<a;
printf("\n Deme un número entero\n");
std::cin >>c;
printf("\n Deme un número entero\n");
std::cin >>d;
printf("\n El módulo entre el primer número y el segundo es:\n");
c%=d;
std::cout <<a;

}
