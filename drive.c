#ifndef DRIVESYS_C
#define DRIVESYS_C

void updateDriveSys (DriveSys t, int LeftMotorPower, int RightMotorPower){

	if(LeftMotorPower > 100){ //Following IF statements set a cap on motor power.
		LeftMotorPower = 100;}

	if(LeftMotorPower < -100){
		LeftMotorPower = -100;}

	if(RightMotorPower > 100){
		RightMotorPower = 100;}

	if(RightMotorPower < -100){
		RightMotorPower = -100;}

	//Unless more code is written here, below statements can be moved inside the IF statements.

	motor[t.backLeft] = LeftMotorPower; //Sets motor power to previously determined values from the IF statements above.
	motor[t.backRight] = RightMotorPower;
	motor[t.frontLeft] = LeftMotorPower;
	motor[t.frontRight] = RightMotorPower;

	return;
}

#endif
