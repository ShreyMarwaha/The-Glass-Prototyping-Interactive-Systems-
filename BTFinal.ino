
int bruh=0;
int state = 0;
int flag = 0;
#define SENSE A0 
//int trigPin = 9;
//int echoPin = 10;

void setup() {
  // put your setup code here, to run once:
pinMode(SENSE, INPUT);
pinMode(8, OUTPUT);


  Serial.begin(9600);
    
//    pinMode(trigPin,OUTPUT);
//    pinMode(echoPin,INPUT);


pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
if (bruh==0){
  if(digitalRead(SENSE))
{
 digitalWrite(LED_BUILTIN, LOW);
 pinMode(8, LOW);
}
else
{
  digitalWrite(LED_BUILTIN, HIGH);  
   pinMode(8, HIGH);
  }}
else if (bruh==1){  
if(digitalRead(SENSE))
{
 digitalWrite(LED_BUILTIN, LOW);
 pinMode(8, LOW);
}
else
{
  delay (2000);
  if(digitalRead(SENSE))
  {
 digitalWrite(LED_BUILTIN, LOW);
 pinMode(8, LOW);
}
  else
  digitalWrite(LED_BUILTIN, HIGH);  
   pinMode(8, HIGH);
  }
}

else if (bruh==2){  
if(digitalRead(SENSE))
{
 digitalWrite(LED_BUILTIN, LOW);
 pinMode(8, LOW);
}
else
{
  delay (4000);
  if(digitalRead(SENSE))
  {
 digitalWrite(LED_BUILTIN, LOW);
 pinMode(8, LOW);
}
  else
  digitalWrite(LED_BUILTIN, HIGH);  
   pinMode(8, HIGH);
  }
}

else if (bruh>=3){
  bruh=0;
}

//  long duration, distance;
//  digitalWrite(trigPin, HIGH);
//  
//  digitalWrite(trigPin, LOW);
//  duration=pulseIn(echoPin,HIGH);
//  distance = (duration/2)/29.1;
//  
//  delay(10);
//
// if((distance<10))
//   {
//    bruh=bruh+1;
//    digitalWrite(LED_BUILTIN, HIGH);
// pinMode(8, LOW);
// delay(2000);
// }
 if(Serial.available() > 0){
 state = Serial.read();
 flag=0;
 }

 if (state == '0') {
 bruh=0;
 if(flag == 0){
 flag = 1;
 }
 }

 if (state == '1') {
 bruh=1;
 if(flag == 0){
 flag = 1;
 }   }
 
 if (state == '2') {
 bruh=2;
 if(flag == 0){
 flag = 1;
 }   }}
