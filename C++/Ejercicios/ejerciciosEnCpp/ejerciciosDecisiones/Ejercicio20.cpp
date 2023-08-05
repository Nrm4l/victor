#include <iostream>
int main(int argc, char const *argv[])
{
	int num, num2, num3;

	std::cout<<"digite tres numeros\n";
	std::cin>>num;
	std::cin>>num2;
	std::cin>>num3;

 	if (num > num2)
 	{
 		if (num > num3)
 		{
 			if (num2 > num3)
 			{
 				std::cout<<num3;
 				std::cout<<num2;
 				std::cout<<num;   
 			}else{
 				std::cout<<num2;
 				std::cout<<num3;
 				std::cout<<num;   
 			}
 		}else{
 			std::cout<<num2;
 			std::cout<<num;
 			std::cout<<num3;   
 		}
 	}

	std::cout<<"\n";
	system("pause"); 
	return 0;
}	