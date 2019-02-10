/*
 Name:		LW_Stepper.cpp
 Created:	2/5/2019 11:37:26 PM
 Author:	Darius Emanuel
 Editor:	http://www.visualmicro.com
*/

#include "LW_Stepper.h"

namespace LW_StepperScope {
	typedef LW_Stepper base;

	//Define constructors


	//Define methods
	void base::init(int nrDePasi, int p0, int p1, int p2, int p3)
	{
		sens = true;
		_pini.resize(4);

		_pini.assign(0, p0);
		_pini.assign(1, p1);
		_pini.assign(2, p2);
		_pini.assign(3, p3);

		_pasiPeRevolutie = nrDePasi;

		_cursa = 0;
	}
	
	void base::rotire()
	{

		int dir = 1;

		if (sens != true) {
			dir = -1;
		}
		step(dir);

	}

	void base::seteazaCursa(int val)
	{
		_cursa = val;
	}

}
