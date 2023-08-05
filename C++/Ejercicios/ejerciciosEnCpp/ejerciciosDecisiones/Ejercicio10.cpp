#include <iostream>
int main(int argc, char const *argv[])
{
	int num, num2;

	std::cout<<"digite un numero entero de dos digitos: ";
	std::cin>>num;

	if ((num >= 10) && (num < 100))
	{
		if ((num / 10) == (num % 10))
		{
			std::cout<<"los dos digitos sin iguales"; 
		}else{
			std::cout<<"Los dos digitos no son iguales"; 
		}
	}else{
		std::cout<<"Numero invalido"; 
	}

	std::cout<<"\n";
	system("pause"); 
	return 0;
}