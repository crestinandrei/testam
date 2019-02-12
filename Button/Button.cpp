/*
 Name:		Button.cpp
 Created:	2/10/2019 1:24:14 AM
 Author:	Darius Emanuel
 Editor:	http://www.visualmicro.com
*/


#include "Button.h"

namespace ButtonScope {

	//Define constructors
	Button::Button()
	{
		_buttonState = false;
		_prevButtonState = false;
		_bounceTime = 0;
		_debounceDelay = 50;
		(*_event) = nullptr;

		_ctrlPin = 2;
		_type = ButtonEnum::PushButton;
	}

	Button::Button(int pin)
	{
		Button();
		_ctrlPin = pin;
	}

	Button::Button(int pin, ButtonType argType)
	{
		Button();
		_ctrlPin = pin;
		_type = argType;
	}

	//Define methods
	void Button::SetPin(int pinNr)
	{
		//Aloca valoarea unui pin pentru pinul de control
	}

	int Button::GetPin()
	{
		//Returneaza pinul de control al butonului
	}

	void Button::SetTrigger(void(*f)())
	{
		//Seteaza functia event, care e apelata in urma semnalului de intrare
	}

	void(*)() Button::GetTrigger()
	{
		//Returneaza adresa functiei event alocate
		return void(*)()();
	}

	void Button::SetDebounceDelay(unsigned long time)
	{
		//Seteaza timpul alocat pragului de filtrare
	}

	unsigned long Button::GetDebounceDelay()
	{
		//Returneaza valoarea actuala pentru filtrare
	}

	bool Button::IsPressed()
	{
		//Verifica daca butonul e apasat sau nu
	}

	void Button::Debounce()
	{
		//Filtreaza semnalul 
	}
}