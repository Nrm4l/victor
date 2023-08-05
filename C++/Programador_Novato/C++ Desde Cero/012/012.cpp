#include <iostream>
#include <math.h>
int main (){

	float x,y,resultado;

	std::cout<<"Digita los siguientes valores\n"; 
	std::cout<<"Valor de x: "; std::cin>>x;
	std::cout<<"Valor de y: "; std::cin>>y;  85

	resultado = ((sqrt(x)) / (pow(y,2) - 1));
	std::cout.precision(3);

	std::cout<<"\nResultado: "<<resultado; 

	std::cout<<"\n"; 
	system("pause");
	return 0;
} 