/*
 * HeroArcher.h
 *
 *  Created on: 17 sept. 2019
 *      Author: stamandnadine
 */

#ifndef HEROARCHER_H_
#define HEROARCHER_H_

#include "SuperHero.h"

class HeroArcher: public SuperHero {
protected:
	int frequence;
public:
	HeroArcher();
	virtual ~HeroArcher();
};

#endif /* HEROARCHER_H_ */
