#include <iostream>
int main(int argc, char const *argv[])
{
	int num, digt1, digt2, digt3;

	std::cout<<"digite un numero de tres digitos: ";
	std::cin>>num;

	if ((num >= 100) && (num < 1000))
	{
		digt1 = num / 100;
		num = num % 100;

		digt2 = num / 10;
		digt3 = num % 10;

		if ((digt1 == digt2) && (digt1 == digt3))
		{
			std::cout<<"multiplo comun: "<<digt1; 
		}else{
			// digito 1
			if (digt1 % digt2 == 0)
			{
				std::cout<<digt1<<" es multiplo de "<<digt2<<"\n"; 
			}
			if (digt1 % digt3 == 0)
			{
				std::cout<<digt1<<" es multiplo de "<<digt3<<"\n"; 
			}
			// digito 2
			if (digt2 % digt1 == 0)
			{
				std::cout<<digt2<<" es multiplo de "<<digt1<<"\n"; 
			}
			if (digt2 % digt3 == 0)
			{
				std::cout<<digt2<<" es multiplo de "<<digt3<<"\n"; 
			}
			// digito 3
			if (digt3 % digt1 == 0)
			{
				std::cout<<digt3<<" es multiplo de "<<digt1<<"\n"; 
			}
			if (digt3 % digt2 == 0)
			{
				std::cout<<digt3<<" es multiplo de "<<digt2<<"\n"; 
			}
		}
	} 

	std::cout<<"\n";
	system("pause"); 
	return 0;
}	