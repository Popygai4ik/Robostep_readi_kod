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
void doezddovpereddo30cm(){
	while(1){
	if (SensorValue[dgtl5] > 30){
		motor[port1] = 40;
				motor[port2] = 40;
				motor[port8] = 35;
				motor[port9] = 35;
				motor[port4] = 0;
				wait10Msec(10);
	}else {
	motor[port1] = 0;
				motor[port2] = 0;
				motor[port8] = 0;
				motor[port9] = 0;
				wait10Msec(10);
				break;
				}}}
task main()
{
doezddovpereddo30cm();
}
