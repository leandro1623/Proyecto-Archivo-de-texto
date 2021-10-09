class ARCHIVO{
	private:
		int cont;//CONTADOR
	public:
		char name_file[100];//nombre del archivo
		ARCHIVO(char _name[]);//constructor rea el archivo
		void set_name_file(char _name[]);//SET
		void escribir_cadena(std::string dato);//escribir una cadena de texto en un archivo
		void mostrar_archivo_completo();//muestra el archivo completo
		void renombrar(char _name[]);//renombra el archivo
		void igualar_nombres(char nombre[]);//iguala un nombre pasado por parametro
};