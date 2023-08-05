#include <iostream>
int main(int argc, char const *argv[])
{
	int num, num2;

	std::cout<<"digite dos numeros enteros de dos digitos\n";
	std::cin>>num;
	std::cin>>num2;

	if ((num >= 10) && (num < 100))
	{
		if ((num2 >= 10) && (num2 < 100))
		{
			if ((num + num2) % 2 == 0)
			{
				std::cout<<"La suma es par"; 
			}else{
				std::cout<<"La suma no es par"; 
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