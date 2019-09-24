/*
 * HeroRapide.h
 *
 *  Created on: 17 sept. 2019
 *      Author: stamandnadine
 */

#ifndef HERORAPIDE_H_
#define HERORAPIDE_H_
#include "SuperHero.h"
#define HERO_RAPIDE_VITESSE_DEPART 100

class HeroRapide : public SuperHero{
protected:
	float vitesse;

public:
	HeroRapide();
	virtual ~HeroRapide();

	float getVitesse() const {
		return vitesse;
	}

	void setVitesse(float vitesse) {
		this->vitesse = vitesse;
	}

	string exporter();

};

#endif /* HERORAPIDE_H_ */
