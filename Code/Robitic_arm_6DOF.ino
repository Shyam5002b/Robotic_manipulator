#include <Servo.h>

Servo servo1, servo2, servo3, servo4, servo5, servo6;  // Create servo objects 


void setup() {
  Serial.begin(9600);  // Initialize serial communication
  
  servo1.attach(8);  // Attach first servo to pin 8
  servo2.attach(9); // Attach second servo to pin 9
  servo3.attach(10); // Attach third servo to pin 10
  servo4.attach(11); // Attach fourth servo to pin 11
  servo5.attach(12); // Attach fifth servo to pin 12
  servo6.attach(13); // Attach sixth servo to pin 13
}

void loop() {
  int analogValue1 = analogRead(A0);  // Read first potentiometer value
  int analogValue2 = analogRead(A1);  // Read second potentiometer value
  int analogValue3 = analogRead(A2);  // Read third potentiometer value
  int analogValue4 = analogRead(A3);  // Read fourth potentiometer value
  int analogValue5 = analogRead(A4);  // Read fifth potentiometer value

  int angle1 = map(analogValue1, 0, 1023, 0, 90); // Scale to 0-90 degrees
  int angle2 = map(analogValue1, 0, 1023, 90, 0); // Scale to 90-0 degrees
  int angle3 = map(analogValue2, 0, 1023, 0, 180); // Scale to 0-180 degrees
  int angle4 = map(analogValue3, 0, 1023, 0, 180); // Scale to 0-180 degrees
  int angle5 = map(analogValue4, 0, 1023, 0, 180); // Scale to 0-180 degrees
  int angle6 = map(analogValue5, 0, 1023, 0, 180); // Scale to 0-180 degrees

  servo1.write(angle1); // Move first servo
  servo2.write(angle2); // Move second servo
  servo3.write(angle3); // Move third servo
  servo4.write(angle4); // Move fourth servo
  servo5.write(angle5); // Move fifth servo
  servo6.write(angle6); // Move sixth servo


  Serial.print("Analog1: "); Serial.print(analogValue1);
  Serial.print(", Angle1: "); Serial.print(angle1);
  Serial.print(" | Analog1: "); Serial.print(analogValue1);
  Serial.print(", Angle2: "); Serial.print(angle2);
  Serial.print(" | Analog2: "); Serial.print(analogValue2);
  Serial.print(", Angle3: "); Serial.print(angle3);
  Serial.print(" | Analog3: "); Serial.print(analogValue3);
  Serial.print(", Angle4: "); Serial.println(angle4);
  
  delay(100);
}