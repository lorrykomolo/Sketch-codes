// Define the analog pin, the LM35's Vout pin is connected to
#define sensorPin A0
int reading;
float voltage, temperatureC, temperatureF;

void setup() {
  Serial.begin(9600);
}

void loop() {

  reading = analogRead(sensorPin);

  voltage = reading * (5.0 / 1024.0);// Convert that reading into voltage

  temperatureC = voltage * 100;// Convert the voltage into the temperature in Celsius

  // Print the temperature in Celsius
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.print("\xC2\xB0"); // shows degree symbol
  Serial.print("C  |  ");

  // Print the temperature in Fahrenheit
  temperatureF = (temperatureC * 9.0 / 5.0) + 32.0; //converting temperature in celcius to fahrenheit
  Serial.print(temperatureF);
  Serial.print("\xC2\xB0"); // shows degree symbol
  Serial.println("F");

  delay(1000);
}
