#ifndef POTENTIOMETERSUB_H
#define POTENTIOMETERSUB_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "interfaces/Potentiometer.h"

/**
 *
 *
 * @author Ron
 */
class PotentiometerSub: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	PotentiometerSub();
	void InitDefaultCommand();
};

#endif
