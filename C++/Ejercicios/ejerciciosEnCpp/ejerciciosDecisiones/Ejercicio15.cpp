#include <iostream>
int main(int argc, char const *argv[])
{
	int num, digt1, digt2, digt3, suma;

	std::cout<<"digite un numero de tres digitos: ";
	std::cin>>num;

	if ((num >= 100) && (num < 1000))
	 {
	 	digt1 = num / 100;
	 	num = num % 100;

	 	digt2 = num / 10;
	 	digt3 = num % 10;

	 	suma = digt1 + digt2 + digt3;

	 	std::cout<<"suma de sus digitos: "<<suma; 

	 } 

	std::cout<<"\n";
	system("pause"); 
	return 0;
}	