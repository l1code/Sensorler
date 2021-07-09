#define led 3 //3.Pinde LED olduğunu tanımlıyoruz
void setup() {
    pinMode(led,OUTPUT); //LED'in çıkış elemanı olduğunu belirtiyoruz
    Serial.begin(9600); //9600 Baundluk bir seri haberleşme başlatıyoruz
}
void loop() {
  int isik = analogRead(A0); //Işık değişkenini A0 pinindeki LDR ile okuyoruz
  Serial.println(isik); //Okunan değeri seri iletişim ekranına yansıtıyoruz
  delay(100);
  if(isik<200)// if döngüsü başlatıyoruz gelen ölçülen değerin bizim belirlediğimiz değerin altında veya üstünde olma durumunu kontrol ediyoruz.
  {
   digitalWrite(led, HIGH); // Eğer ki gelen ışık düzeyi 200 de fazla ise LED’imizi aktif ediyoruz.
  }
  else
  {
   digitalWrite(led, LOW); // Eğer ki gelen ışık düzeyi 200 den fazla ise LED’imizi pasif durumuna çekiyoruz.
  }
}

