const int trigPin=7;
const int echoPin=8;
const int buzzer=9;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  long duration , mesafe;
  
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin,LOW);

  duration=pulseIn(echoPin,HIGH);
  mesafe = microsecondToCentimeters(duration);

  if (mesafe >200)
    mesafe =200;

  if (mesafe>20 && 50 >mesafe)
  {
      melodi(mesafe*10);
    }

  
  Serial.print("Olculen mesafe:");
  Serial.print(mesafe);
  Serial.println(" cm");
  delay(100);
}

long microsecondToCentimeters(long mesafe)
{
  return mesafe /29/2;
  }

int melodi(int dly)
{
  tone(buzzer,440);
  delay(dly);
  noTone(buzzer);
  delay(dly);
  
  }
