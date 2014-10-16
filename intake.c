#ifndef INTAKESYS_C
#define INTAKESYS_C

void updateIntakeSys (IntakeSys t, bool LeftTrigger, bool RightTrigger){


	if(RightTrigger){
		Motor[t.intake] = 100; //If right trigger pressed, set intake motor power to 100 to intake balls.
		}else if(LeftTrigger){
		Motor[t.intake] = -100; //If left trigger pressed, set intake motor power to -100 to remove balls. (Note: Why is this necessary?)
	}
	else(){
		Motor[t.intake] = 0; //If no triggers pressed, disable intake motor.
	}
	return;


#endif
