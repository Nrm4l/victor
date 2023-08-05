#include <iostream>
int main(int argc, char const *argv[])
{
	int num, num2;

	std::cout<<"digite dos numeros enteros\n";
	std::cin>>num;
	std::cin>>num2;

	if (num > num2)
	 {
	 	std::cout<<"digite otro numero: ";
	 	std::cin>>num2;

	 	if (num > num2)
	 	 {
	 	 	std::cout<<"numero mayor: "<<num; 
	 	 }else{
	 	 	std::cout<<"numero mayor: "<<num2; 
	 	 }
	 }else{
	 	std::cout<<"digite otro numero: ";
	 	std::cin>>num;

	 	if (num2 > num)
	 	 {
	 	 	std::cout<<"numero mayor: "<<num2; 
	 	 }else{
	 	 	std::cout<<"numero mayor: "<<num; 
	 	 }
	 }


	std::cout<<"\n";
	system("pause"); 
	return 0;
}	