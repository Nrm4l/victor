#include <iostream>
int main(int argc, char const *argv[])
{
	int num, num2;

	std::cout<<"Digite un numero entero de dos digitos: ";
	std::cin>>num; 

	if ((num >= 10) && (num < 100))
	{
		num2 = num % 10;
		num = num / 10;

		if ((num % 2 == 0) && (num2 % 2 == 0))
		{
			std::cout<<"ambos digitos sin pares"; 
		}else{
			std::cout<<"ambos digitos no son pares"; 
		}
	}else{
		std::cout<<"Numero invalido"; 
	}
	
	


	std::cout<<"\n";
	system("pause"); 
	return 0;
}