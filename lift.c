#ifndef LIFTSYS_C
#define LIFTSYS_C

void updateLiftSys (LiftSys t, bool ButtonY, bool ButtonA ){

	if(ButtonY){
		motor[t.Lift] = 100; //If Y button pressed, set lift motor value to 100 to raise lift.
	}
	else if(ButtonA){ //Secondary note, wouldn't controls be better if L and R triggers were used here instead of A and Y?
		motor[t.Lift] = -100; //If A button pressed, set lift motor value to -100 to lower lift.
	}
	else(){
		motor[t.Lift] = 0; //If none of the above buttons are pressed, stop the lift motor.
	}


	return;
}

#endif
