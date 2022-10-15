# arduino_temperature_humidity_sensor

### Editing the config
- #define DHTPIN 2 /// необходимо изменить номер контакта OUT

- delay(2000); ///  частота опроса датчика в MS (Лучше не менять)

DHT dht(DHTPIN, DHT22); /// необходимо изменить тип датчика (DHT11, DHT22, DHT21)



