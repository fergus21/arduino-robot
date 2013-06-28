 
 
 
 
 
 
 
 
 #include<Servo.h>
 Servo wheel1;
 Servo wheel2;
 Servo wheel3;
 Servo wheel4;
 
 const int motor1 = 1;
 const int motor2 = 2;
 const int motor3 = 3;
 const int motor4 = 4;

const int motionsensor = 5;
const int trigpin = 6;
const int echopin = 7;
 
const int radio1 = 8;
const int radio2 = 9;
const int radio3 = 10;
const int radio4 = 11; 
 
 void setup(){
 pinMode(1,OUTPUT);
 pinMode(2,OUTPUT);
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 
 pinMode(5,INPUT);
 
 pinMode(6,OUTPUT);
 pinMode(7,INPUT);
 
 pinMode(8,INPUT); 
 pinMode(9,INPUT); 
 pinMode(10,INPUT); 
 pinMode(11,INPUT);
 
 }
 
 void loop(){
 
 
 
 }
 
 void attach_servos(){
 wheel1.attach(motor1);
 wheel2.attach(motor2);
 wheel3.attach(motor3);
 wheel4.attach(motor4);
 
 
 }
 
 long get_distance(){
 long dist;
 digitalWrite(trigpin,LOW);
 delay(1);
 digitalWrite(trigpin,HIGH);
 delay(1);
 digitalWrite(trigpin,LOW);
 
 dist =  pulseIn(echopin,HIGH);
 return dist/29/2;
 
 }
 
 void checkmotion(){
 
 
 
 }
