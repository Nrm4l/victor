#include <iostream>
int main(int argc, char const *argv[])
{
	int num, num2, dig1, dig2, dig3, dig4;

	std::cout<<"Digite dos numeros de dos digitos\n";
	std::cin>>num;
	std::cin>>num2;

	if ((num >= 10) && (num2 < 100))
	 {
	 	if ((num2 >= 10) && (num2 < 100))
	 	{
	 		// primer numero
	 		dig1 = num / 10;
	 		dig2 = num % 10;

	 		// segundo numero
	 		dig3 = num2 / 10;
	 		dig4 = num2 % 10;

	 		if ((dig1 == dig3) || (dig1 == dig4))
	 		{
	 			std::cout<<dig1<<" lo tienen en comun\n"; 
	 		}

	 		if ((dig2 == dig3) || (dig2 == dig4))
	 		{
	 			std::cout<<dig2<<" lo tienen en comun\n"; 
	 		}
	 	}else{
	 		std::cout<<"Numero invalido"; 
	 	}
	 }else{
	 	std::cout<<"Numero invalido"; 
	 } 

	std::cout<<"\n";
	system("pause"); 
	return 0;
}	