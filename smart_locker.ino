#include <Servo.h>

const int switchPin = 12; 
const int switchPin1 = 13; 

const int servoBox = 9;
const int servoSterile = 3;

int vale;
int vale1;

Servo servoBox;
Servo servoSterile;

void setup() {
  pinMode(switchPin, INPUT_PULLUP);
  pinMode(switchPin1, INPUT_PULLUP);
  
  servoBox.attach(servoBox);
  servoSterile.attach(servoSterile);

}

void loop() {
    vale=digitalRead(switchPin);
    vale1=digitalRead(switchPin1);
    
      if (vale== HIGH){
    servoSterile.write(180);  
    delay(1500);
     servoSterile.write(0);  
     delay(2000);
     
      }
      else {
     servoSterile.write(0);  
      }
      
  if (vale1== HIGH){
    servoBox.write(180); 
    delay(500);
    
      }
      else {
     servoBox.write(0);  
      }

}
