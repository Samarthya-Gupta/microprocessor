 
//the  project Smart Blind Stick:
//source Code:


// the declaration of the variables are done here:
int echopin=6;//this pin is set as detector of sonar rays:

int trigpin=12;

int buzzer=11;

long int duration;

long int distance;

 void setup() 
 {
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(buzzer,OUTPUT);

  Serial.begin(9600);


}

void loop() 
{
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigpin,LOW);

  duration= pulseIn(echopin,HIGH);// time interval between incoming and outgoing sonar rays:
  distance= duration/2;
  distance= distance/29.1;// we could have also multiplied it by 0.034 :
  
if (distance<100)
{
  digitalWrite(buzzer,HIGH);
}
else
{
  digitalWrite(buzzer,LOW);
}
delay(2500);
}  
// end of loop:
// new cycle runs again:

