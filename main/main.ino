// Developed by wezersovvv
// https://github.com/wezersovvv


#include "DHT.h"
#define DHTPIN 2 // то есть аут датчика (номер на плате)
// О//DHT dht(DHTPIN, DHT11); убрать комментирование даной строки при подключении DHT11
DHT dht(DHTPIN, DHT22); //Инициация датчика
//DHT dht(DHTPIN, DHT11);
void setup() {
  Serial.begin(9600);
  dht.begin();
}
void loop() {
  // Чтение данных
  delay(2000); //  задержки в MS
  float h = dht.readHumidity(); // влажность
  float t = dht.readTemperature(); // температурa
  if (isnan(h) || isnan(t)) {  // if not working -> error
    Serial.println("Ошибка считывания");
    return;
  }
  // цикл провером 2000 MS
  if (h < 30) { // Если Влажность (h) меньше 30%
   // то включается какаято херь
  } else {  //иначе проверка повторяется
   return; 
  }
  
  // Вывод информации на дисплей
  Serial.print("Влажность: ");
  Serial.print(h);
  Serial.print(" %\t");
  Serial.print("Температура: ");
  Serial.print(t);
  Serial.println(" *C "); //output screen

 
 

}