// defines pins numbers
const int pingPin = 9;// Sets the trigger Pin
const int echoPin = 10;
// defines variables
long duration;
int distance;
void setup() {
  pinMode(pingPin, OUTPUT); // Sets the trigger Pin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  Serial.begin(9600); //baudrate
}
void loop() {
  
  digitalWrite(pingPin, LOW); // Clears the trigger Pin
  delayMicroseconds(2);
  
  digitalWrite(pingPin, HIGH);// Sets the trigger Pin on HIGH state for 10 micro seconds
  delayMicroseconds(10);
  
  digitalWrite(pingPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);// Reads the echoPin, returns the sound wave travel time in microseconds
  
  distance = duration * 0.034 / 2;// Calculating the distance

  Serial.print("Distance: ");
  Serial.println(distance);
}
