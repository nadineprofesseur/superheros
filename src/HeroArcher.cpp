/*
 * HeroArcher.cpp
 *
 *  Created on: 17 sept. 2019
 *      Author: stamandnadine
 */

#include "HeroArcher.h"

HeroArcher::HeroArcher() {
}

const Arc* HeroArcher::getArc() const {
	return arc;
}

void HeroArcher::setArc(Arc *arc) {
	this->arc = arc;
}

HeroArcher::~HeroArcher() {
	if(this->arc != NULL) delete this->arc;
}

