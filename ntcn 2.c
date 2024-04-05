
task main()
{

motor[port4] = 50;

motor[port1] = 25;
motor[port2] = 25;
motor[port8] = 15;
motor[port9] = -15;

wait1Msec(3000);


motor[port1] = 0;
motor[port2] = 0;
motor[port8] = 0;
motor[port9] = 0;
wait1Msec(1000);


motor[port4] = -50;
wait1Msec(1500);


motor[port1] = -25;
motor[port2] = -25;
motor[port8] = -15;
motor[port9] = 15;

wait1Msec(3000);


motor[port1] = -50;
motor[port2] = -50;
motor[port8] = 40;
motor[port9] = -40;

wait1Msec(3500);



motor[port4] = 50;

wait1Msec(1500);




}
