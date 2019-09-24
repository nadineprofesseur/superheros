//============================================================================
// Name        : SuperHeros.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "SuperHero.h"
#include "HeroRapide.h"
int main() {
	SuperHero nadine;
	nadine.setNom("Nadine Giasson");
	nadine.activerInvisibilite();
	cout << nadine.getNom() << " est un Super Héro !" << "\n";
	cout << "Exportation : " << nadine.exporter() << endl;

	if(nadine.estInvisible()) cout << "Nadine est invisible" << endl;
	else cout << "Nadine est visible" << endl;

	cout << "Nadine est " << ((nadine.estInvisible())?"invisible":"visible") << endl;

	HeroRapide alexisLeTrotteur;
	alexisLeTrotteur.setVitesse(1000);
	cout << "La vitesse d'Alexis le trotteur est de " << alexisLeTrotteur.getVitesse() << endl;
	cout << "Exporter " << alexisLeTrotteur.exporter() << endl; // pas du polymorphisme

	SuperHero * unHero = &alexisLeTrotteur;
	cout << "Exporter a travers un pointeur " << unHero->exporter() << endl; // appel est polymorphique mais cela ne marche pas

	SuperHero * leHero = new HeroRapide();
	leHero->exporter();

	return 0;
}
