#include <iostream>
int main(int argc, char const *argv[])
{
	int num = 1;

	while (num != 0){
		std::cout<<"Ingrese un numero entero: ";
		std::cin>>num;

		if (num == 0)
		 {
		 	std::cout<<"El numero es cero\n"; 
		 } else{
		 	if (num < 0)
		 	 {
		 	 	std::cout<<"el numero es negativo\n"; 
		 	 } else{
		 	 	std::cout<<"El numero es positivo\n"; 
		 	 }
		 }
	}


	
	


	std::cout<<"\n";
	system("pause"); 
	return 0;
}