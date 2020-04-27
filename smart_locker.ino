#include <Servo.h>

const int switchPin = 12; 
const int switchPin1 = 13; 

const int servoPin = 9;
const int servoPin1 = 3;

const int fsrAnalogPin = A5;


int vale;
int fsrReading;

Servo servo;
Servo servo1;


  
void setup() {
  pinMode(switchPin, INPUT_PULLUP);
    Serial.begin(9600);

  servo.attach(servoPin);
  servo1.attach(servoPin1);

}

void loop() {
    vale=digitalRead(switchPin);
     fsrReading=analogRead(fsrAnalogPin);    

        Serial.println(fsrReading);
        delay(500);

  if (vale== LOW){
  servo.write(180);
  delay(500);

      }
      else {  
     servo.write(0);  
     }

      if (fsrReading > 450){
        delay(500);
    servo1.write(180);  
    delay(1500);
     servo1.write(0);  
     delay(2000);
      servo1.write(180);  
    delay(1500);
     servo1.write(0);  
     delay(2000);
    
      }
      else {
     servo1.write(0);  

      }

}
