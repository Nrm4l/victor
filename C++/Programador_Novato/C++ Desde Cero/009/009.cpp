#include <iostream>
int main(){

	float a,b,c,d,e,f,res;

	std::cout<<"Ingrese los valores numericos";
	std::cout<<"\nValor a: "; std::cin>>a;
	std::cout<<"Valor b: "; std::cin>>b;
	std::cout<<"Valor c: "; std::cin>>c;
	std::cout<<"Valor d: "; std::cin>>d;
	std::cout<<"Valor e: "; std::cin>>e;
	std::cout<<"Valor f: "; std::cin>>f;

	res = (a + (b / c)) / (d + (e / f));
	std::cout.precision(2);

	std::cout<<"El resultado es: "<<res; 



std::cout<<"\n"; 
system("pause");
return 0;
}