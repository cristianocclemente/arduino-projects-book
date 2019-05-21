//imports the servo library
#include <Servo.h>

//create instance of servo
Servo myServo;

int const potPin = A0;
//input var
int potVal;
//output var
int angle;

void setup() {
  //servo is attached to pin 9
  myServo.attach(9);
  //init serial connection
  Serial.begin(9600);
}

void loop() {
  //read analog input
  potVal = analogRead(potPin);
  Serial.print("potVal: ");
  Serial.print(potVal);

  //0-1023 -> 0-179
  angle = map(potVal, 0, 1023, 0, 179);
  Serial.print(", angle: ");
  Serial.println(angle);

  //move servo
  myServo.write(angle);
  delay(15);
}
