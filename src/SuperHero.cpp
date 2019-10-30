/*
 * SuperHero.cpp
 *
 *  Created on: 17 sept. 2019
 *      Author: stamandnadine
 */

#include "SuperHero.h"

//float SuperHero::moyenneHauteurSaut = 0.0f;

SuperHero::SuperHero() { // constructeur

}

SuperHero::~SuperHero() { // destructeur
	this->detruirePouvoirs();
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

string SuperHero::exporterChamps()
{
	stringstream xml;
	xml << "<nom>" << this->nom << "</nom>";
	xml << "<force>" << this->force << "</force>";
	xml << "<invisibilite>" << this->invisibilite << "</invisibilite>";
	xml << "<matiereNoire>" << this->matiereNoire << "</matiereNoire>";
	return xml.str();
}

void SuperHero::ajouterPouvoir(Pouvoir * pouvoir)
{
	this->pouvoirs.push_back(pouvoir);
}

void SuperHero::detruirePouvoirs()
{
	Pouvoir * pouvoir;

	for(vector<Pouvoir *>::iterator visiteur = pouvoirs.begin(); visiteur != pouvoirs.end(); visiteur++)
	{
		pouvoir = *visiteur;
		delete pouvoir;
	}

	this->pouvoirs.clear();
}

string SuperHero::exporter()
{
	stringstream xml;
	xml << "<SuperHero>";
	xml << this->exporterChamps();
	xml << "</SuperHero>";
	return xml.str();
}
