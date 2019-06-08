// Rectangul.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

# incluye  " pch.h "
# incluye   < iostream >

utilizando  namespace   std;

clase  rectángulo{
	doble alto
	doble ancho
público :
	Rectangulo(doble , doble);
	 Área doble();
	doble  getLadoH();
	doble  getLadoL();
};

Volumen de clase : Rectangulo público{
   doble longitud;
público:
	Volumen(doble , doble , doble);
	doble  vol();
	doble  AreaTotal();
};

Rectangulo::Rectangulo(doble h, doble l) {
	alto = h;
	ancho = l;
}

Volumen::Volumen(doble h, doble l, doble x) : Rectangulo(h, l) {
	longitud = x;
}

doble  rectángulo::getLadoH() {
	volver alto
}

doble  rectángulo::getLadoL() {
	vuelta ancho
}


doble  rectangulo::area() {
	retorno alto * ancho;
}

Volumen doble::vol() {
	Área de retorno() * longitud;
}

Volumen doble::AreaTotal() {
	devuelve  2 * ((getLadoH() * getLadoL()) + (getLadoL() * longitud) + (getLadoH() * longitud));
}

int  main() {
	base doble, ancho, altura;
	cout << " INTRODUCIR  MEDIDAS PARA LA FIGURA: " << endl;
	cout << " BASE: ";
	cin >> base;
	cout << " ANCHO: ";
	cin >> ancho;
	cout << " ALTURA: ";
	cin >> altura;

	Volumen figura(base, ancho, altura);
	Rectangulo lado(base, ancho);
	cout << endl;
	cout << "  ÁREA DE LA BASE = " << lado.Área() << " cm2 " << endl;
	cout << "  VOLUMEN = " << figura.vol() << " cm3 " << endl;
	cout << "  AREA = " << figura.AreaTotal() << " cm2 " << endl;
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
