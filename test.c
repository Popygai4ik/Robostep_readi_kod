#pragma config(Sensor, dgtl9,  ,               sensorQuadEncoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
while (1){
motor[port1] = 127;
motor[port2] = 127;
motor[port8] = 127;
motor[port9] = 127;

wait1Msec(1000);

motor[port4] = 127;
motor[port1] = -127;
motor[port2] = -127;
motor[port8] = 127;
motor[port9] = 127;

wait1Msec(1000);
motor[port4] = -127;
motor[port1] = 127;
motor[port2] = 127;
motor[port8] = -127;
motor[port9] = -127;


wait1Msec(1000);
motor[port4] = 127;
motor[port1] = 127;
motor[port2] = 127;
motor[port8] = -127;
motor[port9] = -127;

wait1Msec(1000);}
}