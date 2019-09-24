/*
 * HeroRapide.cpp
 *
 *  Created on: 17 sept. 2019
 *      Author: stamandnadine
 */

#include "HeroRapide.h"

HeroRapide::HeroRapide() {
	this->vitesse = HERO_RAPIDE_VITESSE_DEPART;
}

HeroRapide::~HeroRapide() {
}

string HeroRapide::exporter()
{
	stringstream xml;
	xml << "<HeroRapide>";
	xml << "<vitesse>" << this->vitesse << "</vitesse>";
	xml << SuperHero::exporterChamps();
	xml << "</HeroRapide>";
	return xml.str();
}

