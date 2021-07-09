#include <dht11.h> // dht11 kütüphanesini kodlarımıza dahil ediyoruz.
int DhtPin=2; // DhtPin olarak Dijital 2'yi belirliyoruz.
dht11 dht_sensor; // dht_sensor adında bir DHT11 nesnesi oluşturduk.
void setup()
{
Serial.begin(9600); // Seri iletişimi başlatıyoruz.

}
void loop()
{
// Sensör konrol ediliyor. 
int chk = dht_sensor.read(DhtPin);
// Sensörden okunan değerleri serial ekranda yazdırıyoruz.
Serial.print("Nem Orani (%): ");
Serial.println((float)dht_sensor.humidity, 2);
Serial.print("Sicaklik (Celcius): ");
Serial.println((float)dht_sensor.temperature, 2);
Serial.print("Sicaklik (Kelvin): ");
Serial.println(dht_sensor.kelvin(), 2);
Serial.print("Sicaklik (Fahrenheit): ");
Serial.println(dht_sensor.fahrenheit(), 2);
// Çiğ Oluşma Noktası
Serial.print("Cig Olusma Noktasi: ");
Serial.println(dht_sensor.dewPoint(), 2);
Serial.println("------------------");
// Veriler her 1 saniyede bir veriler ekrana yazdırılacak.
delay(1000);
}
