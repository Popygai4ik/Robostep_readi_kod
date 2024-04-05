#pragma config(Sensor, in3,    ,               sensorReflection)
#pragma config(Sensor, in4,    ,               sensorReflection)
#pragma config(Sensor, dgtl1,  ,               sensorQuadEncoder)
#pragma config(Sensor, dgtl5,  ,               sensorSONAR_cm)
#pragma config(Sensor, dgtl7,  ,               sensorQuadEncoder)
#pragma config(Sensor, dgtl9,  ,               sensorTouch)
#pragma config(Motor,  port1,            ,             tmotorVex393_HBridge, openLoop, driveLeft)
#pragma config(Motor,  port2,            ,             tmotorVex393_MC29, openLoop, driveLeft)
#pragma config(Motor,  port4,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,            ,             tmotorVex393_MC29, openLoop, driveRight)
#pragma config(Motor,  port9,            ,             tmotorVex393_MC29, openLoop, driveRight)
void proezd40cm(){
	bool flag = true;
	SensorValue[dgtl1] = 0;	  // Set the encoder so that it starts counting at 0
	SensorValue[dgtl7]  = 0;
	while(flag){

		if (SensorValue[dgtl1] < 415 && SensorValue[dgtl7] < 415){
		motor[port1] = 40;
				motor[port2] = 40;
				motor[port8] = 35;
				motor[port9] = 35;
				}else{
				motor[port1] = 0;
				motor[port2] = 0;
				motor[port8] = 0;
				motor[port9] = 0;
				flag = false;
				}}}
task main()
{
proezd40cm();
}
