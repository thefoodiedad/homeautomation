#include<SoftwareSerial.h>

int relay1 = 7;
int relay2 = 8;
int relay3 = 9;
int relay4 = 10;
//Create object named bt of the class SoftwareSerial 
SoftwareSerial bt(0,1);     // (Rx,Tx) pins defined  

void setup() {
  bt.begin(9600);    // Define baud rate for software serial communication 
  Serial.begin(9600);     // Define baud rate for serial communication 

  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);

  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);

}


void loop() {
  //char input[10];
  String input;
    if (bt.available())
      { 
      input=bt.readString();

        if(input =="1")
        {
          digitalWrite(relay1, LOW);
        }
        else if(input =="2")
        {
          digitalWrite(relay2, LOW);
        }
        else if(input =="3")
        {
          digitalWrite(relay3, LOW);
        }
        else if(input =="4")
        {
          digitalWrite(relay4, LOW);
        }
        else if(input =="off1")
        {
          digitalWrite(relay1, HIGH);
        }
        else if(input =="off2")
        {
          digitalWrite(relay2, HIGH);
        }
        else if(input =="off3")
        {
          digitalWrite(relay3, HIGH);
        }
        else if(input =="off4")
        {
          digitalWrite(relay4, HIGH);
        }
        else if(input =="off")
        {
          digitalWrite(relay1, HIGH);
          digitalWrite(relay2, HIGH);
          digitalWrite(relay3, HIGH);
          digitalWrite(relay4, HIGH);
        }
        else if(input =="on")
        {
          digitalWrite(relay1, LOW);
          digitalWrite(relay2, LOW);
          digitalWrite(relay3, LOW);
          digitalWrite(relay4, LOW);
        }
      }
    
}
