

#ifndef _Button_h
#define _Button_h

#include "Arduino.h"


namespace ButtonScope {

    namespace Shared {

        struct ButtonTypeStruct {

            enum buttonType {
                Impulse,
                Switch
            };
        };

        typedef ButtonTypeStruct::buttonType ButtonType;
    }
    
    typedef Shared::ButtonTypeStruct::buttonType ButtonType;
    typedef Shared::ButtonTypeStruct ButtonEnum;

    class Button
    {
        public:
            bool IsPressed;

            Button();
            Button(ButtonType);

            void SetPin(int);
            void SetTrigger(void (*)());

            typedef Shared::ButtonTypeStruct ButtonEnum; 

        private:
            int _ctrlPin;
            void (*_event)();
            ButtonType _type;

            void Debounce();
    };
}

typedef ButtonScope::Button Button;

#endif

