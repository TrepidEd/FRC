/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Auto.h>
#include <Commands/Command.h>
#include <Commands/Drive.h>
#include <SmartDashboard/SendableChooser.h>
#include <IterativeRobot.h>
#include <Subsystems/Arcade.h>
#include "OI.h"

class Robot : public IterativeRobot {
public:
	static Arcade arcade;
	static OI m_oi;

private:
	frc::Command* m_autonomousCommand = nullptr;
	Drive m_defaultAuto;
	Auto m_myAuto;
	frc::SendableChooser<frc::Command*> m_chooser;

	void RobotInit() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;
	void DisabledInit() override;
	void DisabledPeriodic() override;
};
