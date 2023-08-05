#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int num1, num2, num3;

	cout<<"Ingrese tres numeros\n";
	cin>>num1;
	cin>>num2;
	cin>>num3; 

	if (num1 + num2 == num3)
	{
		cout<<"iguales"; 
	}
	else
	{
		if (num3 + num2 == num1)
		{
			cout<<"iguales"; 
		}
		else
		{
			if (num1 + num3 == num2)
			{
				cout<<"son iguales"; 
			}
			else
			{
				cout<<"son distintos"; 
			}
		}
	}

	cout<<endl; 
	system("pause");
	return 0;
}