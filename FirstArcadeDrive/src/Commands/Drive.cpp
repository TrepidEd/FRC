#include <Commands/Drive.h>
#include "../Robot.h"

Drive::Drive() {

}


void Drive::Initialize(){
	Requires(&Robot::arcade);
}

void Drive::Execute() {
	auto& joystick = Robot::m_oi.GetJoystick();
	Robot::arcade.ArcadeDrive(joystick.GetX(), joystick.GetY());
}

bool Drive::IsFinished() {
	return false;
}

void Drive::End() {
	Robot::arcade.Stop();
}
