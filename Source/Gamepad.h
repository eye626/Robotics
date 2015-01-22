#ifndef GAMEPAD_H_
#define GAMEPAD_H_

#include "BuiltIns.h"

#define DPAD_UP 1
#define DPAD_DOWN 2
#define DPAD_LEFT 3
#define DPAD_RIGHT 4
#define DPAD_NONE 0

class Gamepad
{
private:
	Joystick Controller;
	
public:
	Gamepad(int port) : Controller(port) {};
	~Gamepad() {};
	
	bool GetYButton();
	bool GetXButton();
	bool GetAButton();
	bool GetBButton();
	
	bool GetLBumper();
	bool GetRBumper();
	
	bool GetLTrigger();
	bool GetRTrigger();

    bool GetLButton();
    bool GetRButton();
	
	float GetLAnalogX();
	float GetLAnalogY();
	
	float GetRAnalogX();
	float GetRAnalogY();
	
	int GetDPad();
};

#endif
