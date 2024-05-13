#ifndef HC_SR04_KUTUPHANE_H
#define HC_SR04_KUTUPHANE_H


float mesafeOlculen(int trigPin, int echoPin) {
  // Trig pini çıkış olarak ayarla
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // 10 mikrosaniye boyunca trig pini yüksek yaparak ultrasonik sinyal gönder
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Echo pininin durumunu zamanlayarak mesafeyi hesapla
  pinMode(echoPin, INPUT);
  long sure = pulseIn(echoPin, HIGH);
  
  // Mesafeyi hesapla: hız = 343 m/s, süre mikrosaniye cinsinden olduğu için 1000000'e bölelim
  float mesafe = (sure / 2.0) * 0.0343; // Mesafe cm cinsinden olacaktır
  return mesafe;
}

