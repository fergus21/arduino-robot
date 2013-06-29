const int trigpin = 9;
const int echopin = 8;
const int  speaker = 6;

const int button1 = 10;
const int button2 = 11;
const int button3 = 12;

void setup(){
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
pinMode(speaker,OUTPUT);
pinMode(button1,INPUT);
pinMode(button2,INPUT);
pinMode(button3,INPUT);
Serial.begin(9600);
}


void loop(){
long sound = 0;
  digitalWrite(trigpin,LOW);
 delayMicroseconds(10);
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);
int val = 0;
val = pulseIn(echopin,HIGH);
long dist = (long) toDistance(val);
//Serial.print(dist);
//Serial.print("\n");
long horizontal =  analogRead(A0);
int vertical =  analogRead(A0);
sound = (dist+1)*(vertical+1)*(horizontal+1);
if(digitalRead(button1)) sound + 100;
if(digitalRead(button2)) sound + 100;
if(digitalRead(button3 )) sound - 100;

Serial.print(sound/1000);
Serial.print(" freq \n");
tone(speaker,sound/1000,100);



}

int toDistance(int x){

return x/29/2;


}
