#define sensorPin A0
int sensorValue;  


void setup() {
 Serial.begin(9600);
}

void loop() {

 sensorValue = analogRead(sensorPin); 
 Serial.println("Soil Moisture: ");
 Serial.println(sensorValue);
}
