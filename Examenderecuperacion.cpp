Examen de Recuperacion.cpp
// ElReprovado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include "pch.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

class persona {
	string nombre;
	int edad;
	char genero;
	string direccion;
	string telefono;
	string email;
	string muestra;
	

public:
	string LeeTxt(string archivo);
	void LeeArchivo();
	string muestraGen();

};


string persona::LeeTxt(string archivo) {
	string texto, linea;
	ifstream miArchivo(archivo);
	if (miArchivo.is_open()) {
		texto = "";
		texto += linea;
		while (getline(miArchivo, linea)) {
			texto += linea;
		}
	}
	miArchivo.close();
	return texto;
}

void persona::LeeArchivo()
{
	
}


string persona::muestraGen()
{
	return string();
}

void persona::LeeArchivo(); string muestraGen() {
	string token, txt;
	token = LeeTxt("C:\\Users\\Palacios\\persona.txt");
	/*cout << token;*/
	string delimita = ",";
	size_t pos = 0;
	while ((pos = token.find(delimita)) != string::npos) {
		txt = token.substr(0, pos);
		cout << txt << endl;
		token.erase(0, pos + delimita.length());
	}
	if (genero == 'M')
		return "Hombre";
	else
		return "Mujer";
	
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
