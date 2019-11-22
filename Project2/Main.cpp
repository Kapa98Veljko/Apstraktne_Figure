#include "Figure.h"
#include <iostream>
using namespace std;

int main() {

	// Ne mozemo da pravimo objekte klase Figura, ali mozemo uz pomoc pokazivaca na Figuru da cuvamo objekte konkretnih figura (Krug, Trougao, Pravougaonik)
	Figura* f1 = new Krug(5.0);
	Figura* f4 = new Pravougaonik(1.0, 2.5);
	Figura* f5 = new Krug(2.0);

	Figura* figure[] = { f1, f4, f5 };

	for (int i = 0; i < 3; i++) {
		cout << "Obim figure " << i + 1 << " je: " << figure[i]->obim() << endl;
	}

	return 0;
}