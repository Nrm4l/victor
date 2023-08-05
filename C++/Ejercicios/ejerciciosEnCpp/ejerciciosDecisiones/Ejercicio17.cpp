#include <iostream>
int main(int argc, char const *argv[])
{
	int num, digt1, digt2, digt3;

	std::cout<<"digite un numero entero de tres digitos: ";
	std::cin>>num;

	if ((num >= 100) && (num < 1000))
	 {
	 	digt1 = num / 100;
	 	num = num % 100;

	 	digt2 = num / 10;
	 	digt3 = num % 10;

	 	if ((digt1 > digt2) && (digt1 > digt3))
	 	{
	 		std::cout<<"El primer digito es el mayor"; 
	 	}else{
	 		if ((digt2 > digt3))
	 		{
	 			std::cout<<"El segundo digito es el mayor"; 
	 		}else{
	 			std::cout<<"El tercer digito es el mayor"; 
	 		}
	 	}
	 }else{
	 	std::cout<<"Numero invalido"; 
	 }

	std::cout<<"\n";
	system("pause"); 
	return 0;
}	