#include <Subsystems/Arcade.h>
#include "../RobotMap.h"

Arcade::Arcade()
    : frc::Subsystem("ExampleSubsystem") {}

void Arcade::InitDefaultCommand() {

}

void Arcade::ArcadeDrive(double xspeed, double zrotate) {
	RobotDrive.ArcadeDrive(xspeed, zrotate);
}

void Arcade::Stop() {
	RobotDrive.ArcadeDrive(0.0, 0.0);
}
