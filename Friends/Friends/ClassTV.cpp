#include "ClassTV.h"
bool Tv::onoff()
{
	state = (state == Off) ? Off :On;
	if (state == On)
	return true;
else
	return false;
}