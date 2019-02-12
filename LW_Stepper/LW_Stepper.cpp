/*
 Name:		LW_Stepper.cpp
 Created:	2/5/2019 11:37:26 PM
 Author:	Darius Emanuel
 Editor:	http://www.visualmicro.com
*/

#include "LW_Stepper.h"

namespace LW_StepperScope {

	//Define constructors
	LW_Stepper::LW_Stepper(int nrDePasi, int p0, int p1) : Stepper(nrDePasi, p0, p1)
	{
		sens = true;

		_tip = StepperEnum::Unipolar;
		_pasiPeRevolutie = nrDePasi;
		_pozitie = 0;
		_cursa = 0;
	}

	LW_Stepper::LW_Stepper(int nrDePasi, int p0, int p1, int p2, int p3) : Stepper(nrDePasi, p0, p1, p2, p3)
	{
		sens = true;

		_tip = StepperEnum::Unipolar;
		_pasiPeRevolutie = nrDePasi;
		_pozitie = 0;
		_cursa = 0;
	}


	//Define methods
	void LW_Stepper::rotire()
	{
		int dir = 1;

		if (sens != true) {
			dir = -1;
		}

		step(dir);
	}

	void LW_Stepper::seteazaCursa(int val)
	{
		_cursa = val;
	}

	void LW_Stepper::seteazaTip(StepperType inType)
	{
		_tip = inType;
	}

}
