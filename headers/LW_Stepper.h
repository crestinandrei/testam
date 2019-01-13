

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

    class Stepper
    {
        public:
            

            typedef Shared::StepperTypeStruct StepperEnum; 

        private:
            
    };
}

typedef StepperScope::LW_Stepper LW_Stepper;

#endif

