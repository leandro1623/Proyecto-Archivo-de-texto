#include<iostream>
#include<cstdlib>
#include"ARCHIVO.H"

//variables globales
char nombre[100]="temp.txt";
ARCHIVO archivo(nombre);

int main(){
	char opc;
	std::string dato;
	
	do{
		system("color 71");
		system("cls");
		std::cout<<"\nEl archivo fue creado con el nombre '"<<archivo.name_file<<"'.";
		std::cout<<"\n1. Escribir en el archivo";
		std::cout<<"\n2. Mostrar el archivo";
		std::cout<<"\n3. renombrar archivo";
		std::cout<<"\n4. Salir";
		std::cout<<"\nOpcion: ";std::cin>>opc;
		
		switch(opc){
			case '1': fflush(stdin);std::cout<<"\nEscriba aqui: ";getline(std::cin,dato);archivo.escribir_cadena(dato);break;
			case '2': archivo.mostrar_archivo_completo();break;
			case '3': fflush(stdin);std::cout<<"Digite el nuevo nombre: ";std::cin.getline(nombre,100,'\n');archivo.renombrar(nombre);
			case '4': break;
			default: std::cout<<"\nerror opcion incorecta\n";
		}
		system("pause");
	}while(opc!='4');
	
	return 0;
}

