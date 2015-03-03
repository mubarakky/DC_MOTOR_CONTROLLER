//DC MOTOR CONTROLLER VERSION 1
//WRITTEN BY OKUNADE M.B
//NO LIMITS
const int Throttle = A0;
const int Gate = 9;

void setup(){
  pinMode(Throttle,INPUT);
  pinMode(Gate,OUTPUT);
}
void loop(){
//INITIALISING VARIABLES
  int k = 0;
  float i = 0;
  k = analogRead(Throttle);
  i = map(k,0,1023,0,255);
  analogWrite(Gate,i);
  
}
