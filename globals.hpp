#pragma once
#include "xlib/api.hpp"
#include "autonomous.hpp"

//Constants
const int MAX_VOLTAGE = 12000;

//Controller
extern Controller master;

extern Flywheel fw;
extern PrimaryMotor Tintake;
extern PrimaryMotor Bintake;


extern Catapult lift;

extern Pneumatics clamp;

extern Pneumatics flap;

extern Pneumatics Parm;

extern Pneumatics Pintake;

extern Pneumatics deflecter;

extern ADIEncoder rightEncoder;

extern RotationSensor rotation;

extern std::shared_ptr<xlib::ExtendedChassis> chassis;

extern Selector selector;