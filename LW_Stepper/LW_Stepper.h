/*
 Name:		LW_Stepper.h
 Created:	2/5/2019 11:37:26 PM
 Author:	Darius Emanuel
 Editor:	http://www.visualmicro.com
*/

#ifndef _LW_Stepper_h
#define _LW_Stepper_h

#include "Arduino.h"
#include "Stepper.h"
#include <vector>

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif


using namespace std;

// <iostream> declares cout/cerr, but the application must define them
// because it's up to you what to do with them.
namespace std
{
	ohserialstream cout(Serial);
}

namespace LW_StepperScope {

	namespace Shared {

		struct StepperTypeStruct {

			enum stepperType {

			};
		};

		typedef StepperTypeStruct::stepperType StepperType;
	}

	typedef Shared::StepperTypeStruct::stepperType StepperType;
	typedef Shared::StepperTypeStruct StepperEnum;

	class LW_Stepper : Stepper
	{
	public:
		bool sens;

		LW_Stepper(int, int, int, int, int) : Stepper(0, 0, 0, 0, 0) {};

		void rotire();   
		void seteazaCursa(int);

		typedef Shared::StepperTypeStruct StepperEnum;

	private:
		int _cursa;
		vector<int> _pini;
		int _pasiPeRevolutie;

		void init(int , int, int, int, int);

	};
}

typedef LW_StepperScope::LW_Stepper LW_Stepper;

#endif

