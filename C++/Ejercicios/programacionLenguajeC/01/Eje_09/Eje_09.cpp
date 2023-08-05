/*Pida al usuario dos numero reales (que se guardaran en la
variable dato 1 y dato 2) y muestre en pantalla el resultado de
dividir dato 1 entre dato 2:   */

#include <iostream>
using namespace std;

int main()
{

	int dato1, dato2, division; 

	cout<<"Ingresa dos nuemros enteros"<<endl; 
	cout<<"Numero 1: ";
	cin>>dato1; 

	if (dato1 == 0)
	{
		cout<<"EL numero es invalido"<<endl;
	}
	else
	{
		cout<<"Nuemro 2:"; 
		cin>>dato2; 	

		if (dato2 == 0 )
		{
			cout<<"El numero es invalido"<<endl; 
		}
		else
		{
		division = dato1 / dato2; 

		cout<<"El resultado de la division entre los dos nuemeros es: "<<division<<endl;
		}
	}
	

	


	system("pause");
	return 0; 
}