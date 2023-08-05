#include <iostream>
int main(int argc, char const *argv[])
{
	int numero,encontrar = 6;

	std::cout<<"del 1 al 10 adivina el numero que estoy pensando: \n";
	std::cin>>numero; 
	
	if (numero == encontrar)
	{
		std::cout<<"Felicidades!!!!\n"; 
	}
	else{

		std::cout<<"no es el numero\n"; 
	}

	system("pause");
	return 0;
}