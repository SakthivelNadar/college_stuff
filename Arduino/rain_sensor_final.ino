#include <Servo.h>
#include <Wire.h> 


Servo myservo1, myservo2; 

int pos = 0; 
int sensorValue = 0;

void setup() {
  Serial.begin(9600);

  myservo1.attach(9);
  myservo2.attach(6);

}

void loop() 
{
sensorValue = analogRead(A0);
Serial.println(sensorValue);
if(sensorValue>800){
  myservo1.write(180);
  myservo2.write(180);

  }
if(sensorValue<=800 && sensorValue>600){
 
  for (pos = 180; pos >= 0; pos-=1) {
    myservo1.write(pos); 
    myservo2.write(pos);                       
    delay(3);                    
  }
  for (pos = 0; pos <= 180; pos+=1) { 
    myservo1.write(pos);
    myservo2.write(pos);                         
    delay(3);        
  }
  delay(2000);
}

if(sensorValue<=600 && sensorValue>460){
  
  for (pos = 180;  pos >= 0; pos-=1) {
    myservo1.write(pos);
    myservo2.write(pos);                        
    delay(3);                   
  }
  for (pos = 0; pos <= 180; pos+=1) { 
    myservo1.write(pos);
    myservo2.write(pos);                         
    delay(3);        
  }
  delay(1000);
}

if(sensorValue<460){
  
  for (pos = 180; pos >= 0; pos-=1) {
    myservo1.write(pos);
    myservo2.write(pos);                        
    delay(3);                    
  }
  for (pos = 0; pos <= 180; pos+=1) { 
    myservo1.write(pos);
    myservo2.write(pos);                         
    delay(3);        
  }
  delay(100);
}

}
//When the above code is
