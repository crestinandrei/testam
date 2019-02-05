

#ifndef _LW_Stepper_h
#define _LW_Stepper_h

#include "Arduino.h"
#include "Stepper.h"


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

            LW_Stepper(int,int,int,int,int);

            void rotire();
            void seteazaCursa(int );

            typedef Shared::StepperTypeStruct StepperEnum;

        private:
            int _cursa;
			std::vector<int> _pini;
			int _pasiPeRevolutie;

    };
}

typedef StepperScope::LW_Stepper LW_Stepper;

#endif

