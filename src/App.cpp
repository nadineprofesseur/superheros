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
#include "HeroArcher.h"
#include "HeroRapide.h"
#include "ArcEnBois.h"
#include "PouvoirRapidite.h"
#include <vector>

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

	// on cree un tableau et 3 objets d'un seul coup
	// - probleme 1 - sur la stack
	// - probleme 2 - objets ne peuvent etre specialises
	SuperHero tableauDesHeros[3]; // requiert un constructeur sans parametre SuperHero( )
	tableauDesHeros[0].activerInvisibilite();
	tableauDesHeros[0].setNom("nadine");

	// + espace est pris sur la heap et non la stack (seulement les pointeurs qui existent dans la stack)
	// + on peut changer le type pointe par un type derive
	// - on peut pas etirer le tableau a plus 1que 3 cases
	SuperHero* tableauDeHeros[3]; // on a cree 3 pointeurs de superhero, mais aucun superheros
	tableauDeHeros[0] = new SuperHero();
	tableauDeHeros[1] = new SuperHero();
	tableauDeHeros[2] = new HeroRapide();
	tableauDeHeros[0]->activerInvisibilite();
	tableauDeHeros[0]->setNom("nadine");
	tableauDeHeros[1]->activerInvisibilite();
	tableauDeHeros[1]->setNom("super prof");
	tableauDeHeros[2]->activerInvisibilite();
	tableauDeHeros[2]->setNom("mario bros");

	for(int position = 0; position < 3; position++)
	{
		cout << tableauDeHeros[position]->getNom() << " est un hero" << endl;
	}

	// + peut etre reetire - mais beaucoup de code & doit faire delete
	SuperHero** tableauPointe = new SuperHero *[3];
	tableauPointe[0] = new SuperHero();
	tableauPointe[1] = new SuperHero();
	tableauPointe[2] = new SuperHero();

	vector<SuperHero *> listeSuperHero;
	listeSuperHero.push_back(&nadine);
	listeSuperHero.push_back(&alexisLeTrotteur);
	listeSuperHero.push_back(new SuperHero());

	for(vector<SuperHero *>::iterator visiteur = listeSuperHero.begin(); visiteur != listeSuperHero.end(); visiteur++)
	{
		cout << (*visiteur)->exporter() << endl;
	}

	HeroArcher * robinDesBois = new HeroArcher();
	robinDesBois->setArc(new ArcEnBois());
	const Arc * arcDeRobin = robinDesBois->getArc();

	alexisLeTrotteur.ajouterPouvoir(new PouvoirRapidite());
	alexisLeTrotteur.detruirePouvoirs();

	return 0;
}
