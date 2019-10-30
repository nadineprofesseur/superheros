/*
 * SuperHero.h
 *
 *  Created on: 17 sept. 2019
 *      Author: stamandnadine
 */

#ifndef SUPERHERO_H_
#define SUPERHERO_H_
#include <string>
#include <sstream>
#include <vector>
#include "Pouvoir.h"

#define TAILLE_MATRICE 10

using namespace std;

class SuperHero {
protected:
	string nom;
	int force;
	bool invisibilite;
	bool matiereNoire;
	int points;
	vector<Pouvoir *> pouvoirs;
protected:
	string exporterChamps();
public:
	SuperHero();
	virtual ~SuperHero();
	void setNom(string);
	string getNom();
	void setForce(int);
	int getForce();
	void activerInvisibilite();
	void desactiverInvisibilite();
	bool estInvisible();
	void activerMatiereNoire();
	void desactiverMatiereNoire();
	bool aDeLaMatiereNoire();
	void ajouterPouvoir(Pouvoir*);
	void detruirePouvoirs();


	virtual string exporter();

};

#endif /* SUPERHERO_H_ */
