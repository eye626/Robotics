#ifndef ROBOT_H_
#define ROBOT_H_

#include "BuiltIns.h"
#include "Gamepad.h"
#include "MechanumDrive.h"
#include "Globals.h"

#define FEED this->GetWatchdog().Feed()

class Robot: public IterativeRobot
{
public:
	Gamepad Controller;
	//MechanumDrive Drive;
	RobotDrive Drive;	

	Robot(void);
	~Robot(void);
	
	void DisabledInit(void);
	void AutonomousInit(void);
	void TeleopInit(void);
	void TestInit(void);
	
	void DisabledPeriodic(void);
	void AutonomousPeriodic(void);
	void TeleopPeriodic(void);
	void TestPeriodic(void);
};

#endif
