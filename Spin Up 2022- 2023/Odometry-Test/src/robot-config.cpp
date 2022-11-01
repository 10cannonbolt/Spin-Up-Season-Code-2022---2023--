#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor CenterWheel = motor(PORT2, ratio18_1, false); // Conveyer belt 
motor LeftFront = motor(PORT4, ratio18_1, false); // FrontLeft
motor LeftBack = motor(PORT6, ratio18_1, false); // BackLeft
motor RightFront = motor(PORT8, ratio18_1, false);
motor RightBack = motor(PORT10, ratio18_1, false);
motor FlyWheel = motor(PORT9, ratio18_1, false);
motor IntakeMotor = motor(PORT5, ratio6_1, false);
encoder EncoderX1 = encoder(PORT5);
encoder EncoderX2 = encoder(PORT7);
encoder Encoder1Y = encoder(PORT11);
pneumatics WheelPusher = pneumatic(PORT12);


// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}
