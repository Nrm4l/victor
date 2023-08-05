#include <iostream>
int main(int argc, char const *argv[])
{
	int num, num2;

	std::cout<<"Digite dos numeros enteros\n";
	std::cin>>num;
	std::cin>>num2;

	if (num > num2) 
	{
		std::cout<<num<<" es mayor"; 
	}else{
		std::cout<<num2<<" es mayor"; 
	}



	std::cout<<"\n";
	system("pause"); 
	return 0;
}	