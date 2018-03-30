#pragma once

#include <Commands/Subsystem.h>
#include "ctre\Phoenix.h"
#include <wpilib.h>
#include <Drive/DifferentialDrive.h>
#include <SpeedControllerGroup.h>

class Arcade : public frc::Subsystem {
public:
	Arcade();
	void InitDefaultCommand() override;
	void ArcadeDrive(double leftAxis, double rightAxis);
	void Stop();
private:
	WPI_TalonSRX LFmotor{0}, RFmotor{1}, LRmotor{2}, RRmotor{3};
	frc::SpeedControllerGroup left{LFmotor, LRmotor}, right{RFmotor, RRmotor};
	frc::DifferentialDrive RobotDrive{right, left};
};
