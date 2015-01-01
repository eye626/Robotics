#ifndef ROBOT_H_
#define ROBOT_H_

#include "BuiltIns.h"
#include "Gamepad.h"
#include "Ports.h"

#define FEED this->GetWatchdog().Feed()

class Robot: public IterativeRobot //we need a better name for the robot class
{
public:
	Gamepad Controller;
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