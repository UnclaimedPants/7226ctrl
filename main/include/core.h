#include <SoftTimer.h>

void switchGearStart(int cSolenoid, int spcVal, int mpcVal);
void switchGearStop();
void gearchangeUp(int newGear);
void gearchangeDown(int newGear);
void decideGear(Task* me);