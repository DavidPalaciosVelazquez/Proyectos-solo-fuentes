// text.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

# incluye  < iostream >
# incluye  < cadena >
# include  < fstream >
# include  < sstream >

utilizando  namespace  std;

string LeeTxt(string archivo) {
	cadena de texto, linea;
	ifstream miArchivo(archivo);
	if (miArchivo.is_open()) {
		texto = " ";
		while (getline(miArchivo, linea)) {
			texto + = linea;
		}
		cout << texto;
		miArchivo.cerrar();
	}
	volver texto;
}

bool  escribeTxt(string archivo, string txt) {
	bool resu = falso;
	de corriente elArchivo(archivo);
	if (elArchivo.is_open()) {
		elArchivo << txt;
		ElArchivo.cerrar();
		resu = true;
	}
	volver resu;
}

string capturaTxt() {
	cadena de caracteres ss;
	cuerda nombre, paterno, materno;
	int edad;
	doble peso;
	doble estatura;
	cout << " ingresa nombre completo: " << endl;
	cin >> nombre;
	cin >> paterno;
	cin >> materno;
	cout << " ingresa edad: " << endl;
	cin >> edad;
	cout << " peso ingresa: " << endl;
	cin >> peso;
	cout << " ingresa estatura: " << endl;
	cin >> estatura;
	ss << nombre << "  " << paterno << "  " << materno << "  " << edad << "  " << peso << "  " << estatura;
	volver ss;
}

int  main() {
	cadena a, b, c;
	int n;
	c = "  ";
	cout << " Ingrese numero de veces: ";
	cin >> n;
	para(int i = 0; i < n; i++) {
		cout << " Captura " << i + 1 << " personas " << endl;
		c + = " ) ";
		c + = capturaTxt();
	}
	a = " archivo.txt ";
	escribeTxt(a, c);
	b = LeeTxt(a);
	cout << endl << a << endl;
	cout << b << endl;
	devuelve  0;
}
// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
