#include<iostream>
#include<string>
#include<fstream>
#include"ARCHIVO.H"


ARCHIVO::ARCHIVO(char name[]){//constructor rea el archivo
	cont=1;//contador
	set_name_file(name);
	std::ofstream archivo;
	archivo.open(name_file,std::ios::out);//abriendo archivo
	if(archivo.fail()){
		std::cout<<"El archivo no pudo abrirse";
	}
	
	std::cout<<"Creando archivo espere un momento...";
	sleep(5);
	std::cout<<"\nArchivo creado";
	sleep(2);
	archivo.close();//cerrando archivo
}

//SET AND GET
void ARCHIVO::set_name_file(char _name[]){//set
	for(int i=0;i<100;i++){
		name_file[i]=_name[i];
	}
}
//ATRIBUTES

void ARCHIVO::escribir_cadena(std::string dato){//escribir una cadena de texto en un archivo
	std::ofstream archivo;
	
	archivo.open(name_file,std::ios::app);//abriendo archivo
	if(archivo.fail()){
		std::cout<<"El archivo no pudo abrirse";
	}
	archivo<<cont<<" "<<dato<<" .";
	cont+=1;
	archivo.close();//cerrando archivo
}

void ARCHIVO::mostrar_archivo_completo(){//muestra el archivo completo
	std::ifstream archivo;
	std::string dato1;
	
	archivo.open(name_file,std::ios::in);//abriendo archivo
	if(archivo.fail()){
		std::cout<<"El archivo no pudo abrirse";
	}
	
	while(!archivo.eof()){
		archivo>>dato1;
		std::cout<<dato1<<" ";
	
	}

	std::cout<<"\n\n";
	archivo.close();//cerrando archivo
}

void ARCHIVO::renombrar(char _name[]){//renombra el archivo
	rename(name_file,_name);
	igualar_nombres(_name);
}

//iguala un nombre pasado por parametro
void ARCHIVO::igualar_nombres(char nombre[]){
	for(int i=0;i<100;i++){
		name_file[i]=nombre[i];
	}
}