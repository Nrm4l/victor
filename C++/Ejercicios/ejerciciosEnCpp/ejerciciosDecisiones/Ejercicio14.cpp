#include <iostream>
int main(int argc, char const *argv[])
{
	int num, num2, digt1, digt2, digt3, digt4, suma;

	std::cout<<"Digite dos numeros enteros de dos digitos\n";
	std::cin>>num;
	std::cin>>num2;

	if ((num >= 10) && (num < 100))
	 {
	 	if ((num2 >= 10) && (num2 < 100))
	 	{
	 		digt1 = num / 10;
	 		digt2 = num % 10;

	 		digt3 = num2 /10;
	 		digt4 = num2 % 10;

	 		suma = digt1 + digt2 + digt3 + digt4;

	 		std::cout<<"suma de todos los digitos: "<<suma; 
	 	}else{
	 		std::cout<<"numero invalido"; 
	 	}
	 }else{
	 	std::cout<<"numero invalido"; 
	 }

	std::cout<<"\n";
	system("pause"); 
	return 0;
}	