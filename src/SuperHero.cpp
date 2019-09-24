/*
 * SuperHero.cpp
 *
 *  Created on: 17 sept. 2019
 *      Author: stamandnadine
 */

#include "SuperHero.h"

SuperHero::SuperHero() { // constructeur



}

SuperHero::~SuperHero() { // destructeur


}

void SuperHero::setNom(string nom)
{
	this->nom = nom;
}
string SuperHero::getNom()
{
	return this->nom;
}
void SuperHero::setForce(int force)
{
	this->force = force;
}

int SuperHero::getForce()
{
	return this->force;
}

void SuperHero::activerInvisibilite()
{
	this->invisibilite = true;
}
void SuperHero::desactiverInvisibilite()
{
	this->invisibilite = false;
}
bool SuperHero::estInvisible()
{
	return this->invisibilite;
}
void SuperHero::activerMatiereNoire()
{
	this->matiereNoire = true;
}
void SuperHero::desactiverMatiereNoire()
{
	this->matiereNoire = false;
}
bool SuperHero::aDeLaMatiereNoire()
{
	return this->matiereNoire;
}

string SuperHero::exporter()
{
	return "<SuperHero></SuperHero>";
}
