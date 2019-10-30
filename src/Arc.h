/*
 * Arc.h
 *
 *  Created on: 1 oct. 2019
 *      Author: stamandnadine
 */

#ifndef ARC_H_
#define ARC_H_

#define LONGUEUR_ARC 20

class Arc {
protected:
	float longueur;
public:
	Arc();
	Arc(float);
	virtual ~Arc();
};

#endif /* ARC_H_ */
