rectangulo.cpp
#include "pch.h"
#include  < iostream >

using namespace  std;

class Rectangulo {
	double alto;
	double ancho;
public:
	Rectangulo(double, double);
	double Area();
	double getLadoH();
	double getLadoL();
};

class Volumen : public Rectangulo {
	double longitud;
public:
	Volumen(double, double, double);
	double vol();
	double AreaTotal();
};

Rectangulo::Rectangulo(double h, double l) {
	alto = h;
	ancho = l;
}

Volumen::Volumen(double h, double l, double x) : Rectangulo(h, l) {
	longitud = x;
}

double Rectangulo::getLadoH() {
	return alto;
}

double Rectangulo::getLadoL() {
	return ancho;
}


double Rectangulo::Area() {
	return alto * ancho;
}

double Volumen::vol() {
	return Area() * longitud;
}

double Volumen::AreaTotal() {
	return 2 * ((getLadoH() * getLadoL()) + (getLadoL() * longitud) + (getLadoH() * longitud));
}

int main(){
	double base, ancho, altura;
	cout << "INTRODUCIR LAS MEDIDAS PARA LA FIGURA: " << endl;
	cout << " BASE: ";
	cin >> base;
	cout << " ANCHO: ";
	cin >> ancho;
	cout << "ALTURA: ";
	cin >> altura;

	Volumen figura(base, ancho, altura);
	Rectangulo lado(base, ancho);
	cout << endl;
	cout << " EL AREA DE LA BASE= " << lado.Area() << " cm2" << endl;
	cout << " EL VOLUMEN= " << figura.vol() << " cm3" << endl;
	cout << " EL AREA= " << figura.AreaTotal() << " cm2" << endl;
}