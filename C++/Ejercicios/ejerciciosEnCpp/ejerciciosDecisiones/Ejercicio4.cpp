#include <iostream>
int main(int argc, char const *argv[])
{
	int num, num2;

	std::cout<<"digite un numero entero de dos digitos\n";
	std::cin>>num;

	if ((num >= 10) && (num < 100)) 
	 {
	 	num2 = num % 10;
	 	num = num / 10;

	 	num = num + num2;

	 	std::cout<<"suma de sus digitos: "<<num; 
	 } else{
	 	std::cout<<"Numero invalido"; 
	 }


	
	


	std::cout<<"\n";
	system("pause"); 
	return 0;
}