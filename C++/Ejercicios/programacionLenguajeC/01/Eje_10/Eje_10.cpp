/*   Pida al usuario dos números reales (que se guardaran en las
variables dato 1 y dato 2). Si dato 2  es cero deberá mostrar un
mensaje de error y esn caso contrario mostrara en pantalla el
resultado de dividir dato 1 entre dato 2:  */ 

#include <iostream>
using namespace std;

int main()
{

	int dato1, dato2, division; 

	cout<<"Ingresa dos numeros reales"<<endl; 
	cout<<"Numero 1: ";
	cin>>dato1; 
	cout<<"Numero 2: "; 
	cin>>dato2; 

	switch(dato2) {

		case 0: 
			cout<<"Error"<<endl;
			break;   
	
		default:

		division = dato1 / dato2; 

		cout<<"El resultado de la division es: "<<division<<endl;

	}


	


	system("pause"); 
	return 0;
}