/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include <Commands/Auto.h>
#include "Commands/Drive.h"
#include "../Robot.h"

Auto::Auto() {
	// Use Requires() here to declare subsystem dependencies
	Requires(&Robot::arcade);
}

// Called just before this Command runs the first time
void Auto::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void Auto::Execute() {
	Robot::arcade.ArcadeDrive(1.0, 0.);
}

// Make this return true when this Command no longer needs to run execute()
bool Auto::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void Auto::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Auto::Interrupted() {}
