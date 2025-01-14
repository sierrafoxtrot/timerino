/*
 Timerino.h
 This file contains a number of defines to build Timerino software as you like it!
 Every define should come with an explicative comment, if not so clear please refer
 to the official documentation.
*/

// change to HIGH the following if you want the relay be (de)activated on
// pushbutton *release* instead of *press*
#define ACTIONSIGNAL HIGH

// Digital output values for driving relay active high
#define RELAY_ON HIGH
#define RELAY_OFF LOW

// Digital output values for driving relay active low
//#define RELAY_ON HIGH
//#define RELAY_OFF LOW

// Set to 1 if you want last mode and times used be preserved when you
// power off the timer
#define EPR 1

// Turn debugging on/off on serial output
#undef DEBUGGING
