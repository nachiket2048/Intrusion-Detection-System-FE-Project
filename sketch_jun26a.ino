const int pirPin = 2;     // PIR sensor output pin
const int buzzerPin = 3;  // Buzzer control pin

void setup() {
  pinMode(pirPin, INPUT);      // Set PIR pin as input
  pinMode(buzzerPin, OUTPUT);  // Set buzzer pin as output
  Serial.begin(9600);          // Initialize serial communication
}

void loop() {
  int pirValue = digitalRead(pirPin);  // Read PIR sensor value

  if (pirValue == HIGH) {  // If motion is detected
    Serial.println("Motion detected!");
    digitalWrite(buzzerPin, LOW);  // Turn on the buzzer
    delay(3000);                     // Wait for 3 seconds
    digitalWrite(buzzerPin, LOW);   // Turn off the buzzer
  }
}

int main(){
  return 0;
}
