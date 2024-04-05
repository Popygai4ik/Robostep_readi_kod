
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
void dve_paraaleliniie_line_propysk_pervoi(){
	bool flag = true;
	int c = 0;
	SensorValue[dgtl1] = 0;	  // Set the encoder so that it starts counting at 0
	SensorValue[dgtl7]  = 0;
	while(flag){

		if (SensorValue[in3]<300 && SensorValue[in4]>300 && c > 3){
		motor[port1] = 0;
				motor[port2] = 0;
				motor[port8] = 0;
				motor[port9] = 0;
				c += 1;

				}else if (SensorValue[in3]>1800 && SensorValue[in4]>1800 && c == 1){
				motor[port1] = 0;
				motor[port2] = 0;
				motor[port8] = 0;
				motor[port9] = 0;
				flag = false;
			}else{
				motor[port1] = 50;
				motor[port2] = 50;
				motor[port8] = 45;
				motor[port9] = 45;
				}}
	motor[port2] = 0;
		motor[port8] = 0;
		motor[port9] = 0;
		motor[port4] = 0;
		wait1Msec(400);
	}
task main()
{
dve_paraaleliniie_line_propysk_pervoi();


}
