#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int num;

	cout<<"digite un numero de 3 digitos: ";
	cin>>num; 

	if (num >= 100 & num <1000)
	{
		cout<<"El numero tiene tres digitos"; 
	}
	else
	{
		cout<<"El numero no tiene tres digitos"; 
	}

	cout<<endl; 
	system("pause");
	return 0;
}
