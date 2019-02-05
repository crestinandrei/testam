
#include "Button.h"

namespace ButtonScope {

    typedef Button base;

    //Define constructors
    base::Button()
    {
        _buttonState = false;
        _prevButtonState = false;
        _buttonTime = 0;
        _debounceDelay = 50;
        (*_event) = nullptr;

        _ctrlPin = 2
        _type = Button::ButtonEnum::PushButton

    }

    base::Button(int pin)
    {
        Button();
        _ctrlPin = pin
    }

    base::Button(int pin, ButtonType argType)
    {
        Button();
        _ctrlPin = pin
        _type = argType
    }

    //Define methods
    void base::SetPin(int pinNr)
    {

    }

    void base::SetTrigger(void (*f)())
    {

    }

    void base::SetDebounceDelay(unsigned long time)
    {

    }

    int base::GetPin()
    {

    }

    void base::GetPin()
    {
        
    }

    void (*)() base::GetTrigger()
    {

    }

    unsigned long base::GetDebounceDelay()
    {

    }

    bool IsPressed()
    {
        
    }

    void base::Debounce()
    {

    }
}