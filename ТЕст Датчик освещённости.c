#pragma config(Sensor, in3,    ,               sensorReflection)
#pragma config(Sensor, in4,    ,               sensorReflection)
#pragma config(Motor,  port1,            ,             tmotorVex393_HBridge, openLoop, driveLeft)
#pragma config(Motor,  port2,            ,             tmotorVex393_MC29, openLoop, driveLeft)
#pragma config(Motor,  port4,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,            ,             tmotorVex393_MC29, openLoop, driveRight)
#pragma config(Motor,  port9,            ,             tmotorVex393_MC29, openLoop, driveRight)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{bool flag = true;
	while(flag)

	{if(SensorValue[in3]>1800 && SensorValue[in4]>1800){
				flag = false;

		}else {

				motor[port1] = 40;
				motor[port2] = 40;
				motor[port8] = 40;
				motor[port9] = 40;
			wait1Msec(10);
		}}
		motor[port1] = -40;
				motor[port2] = -40;
				motor[port8] = -40;
				motor[port9] = -40;
			wait1Msec(1000);




}
