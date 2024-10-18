#include "globals.hpp"
using namespace xlib;

//Controller
Controller master(ControllerId::master);

std::uint8_t portExtender = 21;

//Custom chassis object to wrap drivetrain motors and control movement
std::shared_ptr<ExtendedChassis> chassis = ExtendedChassisBuilder()
    .withMotors({-18,2,-3}, {10,-6,8})
    .withDimensions({AbstractMotor::gearset::blue, (4.0 / 5.0)}, {{3.25_in, 4.5_in}, /*imev5BlueTPR*/ quadEncoderTPR}, 11_in)
    .withMaxVelocity(480)
    .withSensors({{15},true}, 14)
    .withGains(
        {0.1, 0.005, 0.00165}, // Distance controller gains
        //{.1, 0, .00001}, // Distance controller gains
        {0.03, 0.000, 0.0012}, // Turn controller gains
        {0.04, 0.0, 0.0},  // Angle controller gains
        {2.5, 0.01, 0.4} //Pure pursuit gains
    )   
    .withVelocityConstants(480, 200, 4.0, 200)
    .withLookahead(10_in)
    .build();

//Custom flywheel object to implement TBH control
//Flywheel fw(-1, 0.0003f, 0.4f, selector);


PrimaryMotor Tintake(19);
PrimaryMotor Bintake(12);

//Pneumatics
Pneumatics clamp('A',false);
Pneumatics deflecter('B',false);
Pneumatics Parm('C',false);
Pneumatics Pintake('D',false);
Pneumatics flap('E',false);



//Lift Motors
Catapult lift(1);


//Custom auton selector object. Takes button names and functions to run
Selector selector({
    {{"Blue L 3 Ring", blueleft3Ring }, {"Blue R 5 Ring", blueright5Ring}, {"Blue R 6 Ring", blueright6Ring}},
    {{"Full WP", fullWP}},
    {{"Red L 3 Ring", redright3Ring}, {"Red L 5 Ring", redleft5Ring}, {"Red R 6 Ring", redleft6Ring}}
});