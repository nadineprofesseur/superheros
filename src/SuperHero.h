/*
 * SuperHero.h
 *
 *  Created on: 17 sept. 2019
 *      Author: stamandnadine
 */

#ifndef SUPERHERO_H_
#define SUPERHERO_H_
#include <string>
using namespace std;

class SuperHero {
protected:
	string nom;
	int force;
	bool invisibilite;
	bool matiereNoire;
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

	virtual string exporter();

};

#endif /* SUPERHERO_H_ */
