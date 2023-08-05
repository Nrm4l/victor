#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int num;

	cout<<"digite un numero entero\n";
	cin>>num;

	if (num % 10 == 4)
	 {
	 	cout<<"el numero termina en 4"; 
	 } 
	 else
	 {
	 	cout<<"El numero no termina en 4"; 
	 }

	cout<<endl; 
	system("pause");
	return 0;
}