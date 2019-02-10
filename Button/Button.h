/*
 Name:		Button.h
 Created:	2/10/2019 1:24:14 AM
 Author:	Darius Emanuel
 Editor:	http://www.visualmicro.com
*/

#ifndef _Button_h
#define _Button_h


#include "Arduino.h"

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif


namespace ButtonScope {

	namespace Shared {

		struct ButtonTypeStruct {

			enum buttonType {
				PushButton,
				SwitchButton
			};
		};

		typedef ButtonTypeStruct::buttonType ButtonType;
	}

	typedef Shared::ButtonTypeStruct::buttonType ButtonType;
	typedef Shared::ButtonTypeStruct ButtonEnum;

	class Button
	{
	public:
		Button();
		Button(int);
		Button(int, ButtonType);

		void SetPin(int);
		void SetTrigger(void(*)());
		void SetDebounceDelay(unsigned long);

		int GetPin();
		void(*)() GetTrigger();
		unsigned long GetDebounceDelay();
		bool IsPressed();

		typedef Shared::ButtonTypeStruct ButtonEnum;

	private:
		bool _buttonState;
		bool _prevButtonState;
		unsigned long _bounceTime;
		unsigned long _debounceDelay;
		void(*_event)();
		int _ctrlPin;
		ButtonType _type;

		void Debounce();
	};
}

typedef ButtonScope::Button Button;

#endif

