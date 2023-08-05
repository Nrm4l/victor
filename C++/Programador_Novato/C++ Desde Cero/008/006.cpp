#include <iostream>
int main(){

	float a, b, res;

	std::cout<<"Ingrese los siguientes valores"; 
	std::cout<<"\nValor a: "; std::cin>>a;
	std::cout<<"\nValor b: "; std::cin>>b;

	res = (a / b) + 1;
	std::cout.precision(3); 

	std::cout<<"Resultado de la division , mas 1: "<<res;



std::cout<<"\n"; 
system("pause");
return 0;
}