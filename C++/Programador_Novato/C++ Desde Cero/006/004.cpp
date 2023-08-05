#include <iostream>
int main(){
	int  sum, rest, mul;
	float num, num2, div;

	std::cout<<"Digite dos numeros \n"; 
	std::cout<<"Numero-1: "; 
	std::cin>>num;

	std::cout<<"Numero-2: "; 
	std::cin>>num2;

	sum = num + num2;
	rest = num - num2;
	mul = num * num2;
	div = num / num2;

	std::cout<<"----Resultados----"<<"\n"; 
	std::cout<<"Suma: "<<sum<<"\n";
	std::cout<<"Resta: "<<rest<<"\n";
	std::cout<<"Multiplicacion: "<<mul<<"\n";
	std::cout<<"Division: "<<div<<"\n";

std::cout<<"\n"; 
system("pause");
return 0;
}