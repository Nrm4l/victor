#include <iostream>
int main(){

	float practicas,participacion,examen,res;
	std::cout<<"Ingresa tus calificaciones"; 

	std::cout<<"\nCalificacion de las practicas: "; std::cin>>practicas;
	std::cout<<"Calificacion de participacion: "; std::cin>>participacion;
	std::cout<<"Calificacion del examen: "; std::cin>>examen; 

	practicas *= 0.40;
	participacion *= 0.20;
	examen *= 0.40;

	res = practicas + participacion + examen;

	std::cout<<"\nEl resultado final de tus calificaciones es: "<<res; 





std::cout<<"\n"<<"\n"; 
system("pause");
return 0;
}