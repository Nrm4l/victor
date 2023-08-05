#include <iostream>
int main(){

	int a,b,aux;

	std::cout<<"Ingrese los valores que se te piden"; 
	std::cout<<"\nValor a: "; std::cin>>a;
	std::cout<<"Valor b: "; std::cin>>b;

	aux = a;

	a = b;
	b = aux;

	std::cout<<"\nLos valores intercambiados"; 
	std::cout<<"\nValor a: "<<a; 
	std::cout<<"\nValor b: "<<b; 



std::cout<<"\n"<<"\n"; 
system("pause");
return 0;
}