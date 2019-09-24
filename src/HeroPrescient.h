/*
 * HeroPrescient.h
 *
 *  Created on: 17 sept. 2019
 *      Author: stamandnadine
 */

#ifndef HEROPRESCIENT_H_
#define HEROPRESCIENT_H_

#include "SuperHero.h"

class HeroPrescient: public SuperHero {
protected:
	int delaiDePerception;
public:
	HeroPrescient();
	virtual ~HeroPrescient();
};

#endif /* HEROPRESCIENT_H_ */
