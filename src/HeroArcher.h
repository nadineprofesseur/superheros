/*
 * HeroArcher.h
 *
 *  Created on: 17 sept. 2019
 *      Author: stamandnadine
 */

#ifndef HEROARCHER_H_
#define HEROARCHER_H_

#include "SuperHero.h"
#include "Arc.h"

class HeroArcher: public SuperHero {

protected:
	int frequence;
	Arc * arc = NULL;
public:
	HeroArcher();
	virtual ~HeroArcher();
	const Arc* getArc() const;
	void setArc(Arc *arc);
};

#endif /* HEROARCHER_H_ */
