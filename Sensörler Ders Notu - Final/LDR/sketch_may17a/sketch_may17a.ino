void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int deger = analogRead(A0);
  Serial.print("Okunan Deger : ");
  Serial.println(deger);
  delay(100);
  if (deger > 600)
  {
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    }
    else 
    {
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW );
      }
}
