#include <iostream>
int main(int argc, char const *argv[])
{
	int num, num2;

	std::cout<<"digite un numero entero de dos digitos: ";
	std::cin>>num;

	if ((num >= 10) && (num < 100))
	 {
	 	num2 = num % 10;
	 	num = num / 10;

	 	if (num % num2 == 0)
	 	{
	 		std::cout<<num<<" es multiplo de "<<num2; 
	 	}else{
	 		if (num2 % num == 0)
	 		{
	 			std::cout<<num2<<" es multiplo de "<<num; 
	 		}
	 	}
	 }else{
	 	std::cout<<"Numero invalido"; 
	 }

	std::cout<<"\n";
	system("pause"); 
	return 0;
}