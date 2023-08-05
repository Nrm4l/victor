/* Pida al usuario dos numero enteros (que se guardaran en las
variables n1 y n2 ) y muestre su producto en pantalla:  */

#include <iostream>
using namespace std; 

int Bmain()
{
	 int n1, n2, producto;

	 cout<<"Hola amigo, ingresa dos numeros enteros"<<endl;
	 cout<<"Numero 1: ";
	 cin>>n1; 
	 cout<<"Numero 2: "; 
	 cin>>n2; 

	 producto = n1 * n2;

	 cout<<"El producto de los dos numeros es: "<<producto<<endl;




	system("pause");
	return 0;
}