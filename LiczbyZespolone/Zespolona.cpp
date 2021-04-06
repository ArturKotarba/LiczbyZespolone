#include <iostream>
#include "Zespolona.h"

using namespace std;

Zespolona::Zespolona(double x, double y) : x(x), y(y) {}
Zespolona::~Zespolona() {}

Zespolona& Zespolona::sprzezona() {
	this->x = x;
	this->y = -y;
	return *this;
}

Zespolona& Zespolona::operator + (const Zespolona& kl) {
	static Zespolona dodaj;
	dodaj.x = x + kl.x;
	dodaj.y = y + kl.y;

	return dodaj;
}

Zespolona& Zespolona::operator - (const Zespolona& kl) {
	static Zespolona odejmij;
	odejmij.x = x - kl.x;
	odejmij.y = y - kl.y;

	return odejmij;
}

Zespolona& Zespolona::operator * (const Zespolona& kl) {
	static Zespolona mnozenie;
	mnozenie.x = ((x * kl.x) + (y * (-1 * kl.y)));
	mnozenie.y = (x * kl.y) + (y * kl.x);
	return mnozenie;
}

Zespolona& Zespolona::operator / (const Zespolona& kl) {  
	static Zespolona dzielenie;
	static Zespolona licznik;
	static Zespolona mianownik; 
	static Zespolona sprzezenie;

	licznik.x = x; 
	licznik.y = y; 

	mianownik.x = kl.x; 
	mianownik.y = kl.y; 

	sprzezenie = licznik * mianownik; 

	dzielenie.x = sprzezenie.x / ((mianownik.x * mianownik.x) + (mianownik.y * mianownik.y));
	dzielenie.y = sprzezenie.y;
	return dzielenie;
}

ostream& operator << (ostream& out, const Zespolona& Rz) {
	if (Rz.y == 0)
		out << Rz.x << "" << endl;
	else if (Rz.x == 0)
		out << Rz.y << "i" << endl;
	else if(Rz.y > 0)
	out << Rz.x << " + " << Rz.y << "i" << endl;
	else
		out << Rz.x << Rz.y << "i" << endl;

	return out;
}