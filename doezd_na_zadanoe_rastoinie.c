#pragma config(Sensor, in3,    ,               sensorReflection)
#pragma config(Sensor, in4,    ,               sensorReflection)
#pragma config(Sensor, dgtl1,  ,               sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  ,               sensorTouch)
#pragma config(Sensor, dgtl4,  ,               sensorTouch)
#pragma config(Sensor, dgtl5,  ,               sensorSONAR_cm)
#pragma config(Sensor, dgtl7,  ,               sensorQuadEncoder)
#pragma config(Sensor, dgtl9,  ,               sensorTouch)
#pragma config(Motor,  port1,            ,             tmotorVex393_HBridge, openLoop, driveLeft)
#pragma config(Motor,  port2,            ,             tmotorVex393_MC29, openLoop, driveLeft)
#pragma config(Motor,  port4,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,            ,             tmotorVex393_MC29, openLoop, driveRight)
#pragma config(Motor,  port9,            ,             tmotorVex393_MC29, openLoop, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void doezd_na_zadanoe_rastoinie(int cm){
	while(1){
	if (SensorValue[dgtl5] > cm + 5){
		motor[port1] = 40;
				motor[port2] = 40;
				motor[port8] = 35;
				motor[port9] = 35;
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
doezd_na_zadanoe_rastoinie(40);


}
