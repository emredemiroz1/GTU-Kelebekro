//Bu kütüphane Emre DEMİRÖZ tarafından yazılıp  açık kaynaklı olarak paylaşılmıştır. 
//emredemiroz173@gmail.com

#include <Arduino.h>
#include "emred_hc-sr04.h"

UltrasonikMesafe sensor1(2, 3); // 1. ultrasonik sensör
UltrasonikMesafe sensor2(4, 5); // 2. ultrasonik sensör
UltrasonikMesafe sensor3(6, 7); // 3. ultrasonik sensör

void setup() {
  Serial.begin(9600);
}

void loop() {
  float mesafe1 = sensor1.mesafeOlculen();
  Serial.print("1. Sensör Mesafesi: ");
  Serial.print(mesafe1);
  Serial.println(" cm");

  float mesafe2 = sensor2.mesafeOlculen();
  Serial.print("2. Sensör Mesafesi: ");
  Serial.print(mesafe2);
  Serial.println(" cm");

  float mesafe3 = sensor3.mesafeOlculen();
  Serial.print("3. Sensör Mesafesi: ");
  Serial.print(mesafe3);
  Serial.println(" cm");

  delay(1000);
}

