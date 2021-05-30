
/*
   This Code is created by Prabhas Kumar on 20th may'21 @ 01.55

   This is the part of project ILC.

   It is Main Program of ILC!

   Reley ---> D4 Buzzer ---> D11 || RTC --->  CLK: D5; DAT: D6; RST: D7

   The Source(s) is/are - https://bit.ly/3wfzjuP

   Note - The Source(s) is/are collection of all used in this project!

   Name of program - ILC.ino
*/


#include <virtuabotixRTC.h> // The lib. used for RTC module

// Aurdino Pins
#define rly 4 // Reley
#define buzz 11 // Buzzer

virtuabotixRTC myRTC(5, 6, 7); // RTC


boolean state = true; // Status of Reley var.


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  // Defining type of connected components
  pinMode(rly, OUTPUT);
  pinMode(buzz, OUTPUT);

  myRTC.updateTime(); // Update the variables of RTC

  // Printing the Start-UP mes.
  Serial.println("Program Started on:\n");
  Serial.print(myRTC.dayofmonth);
  Serial.print("/");
  Serial.print(myRTC.month);
  Serial.print("/");
  Serial.print(myRTC.year);
  Serial.print(" ");
  Serial.print(myRTC.hours);
  Serial.print(":");
  Serial.print(myRTC.minutes);
  Serial.print(":");
  Serial.println(myRTC.seconds);

  // Following the start up Protocol
  digitalWrite(rly, LOW);

  digitalWrite(buzz, HIGH);
  delay(125);
  digitalWrite(buzz, LOW);


}

void loop() {
  // put your main code here, to run repeatedly:

  myRTC.updateTime(); // Update the variables of RTC

  Main(); // Running the main protocol

  delay(30000); // Deley to ...
}


void Main() {
  // Main protocol

  /* Condition for every hour then checking
     wether the protocol is allready finished or not by the status of Reley
     If not, running defined Peice of sub-protocols
  */
  if (myRTC.hours >= 18 && myRTC.hours < 23) {
    if (state == false) {
      digitalWrite(rly, LOW);
      digitalWrite(buzz, HIGH);
      delay(125);
      digitalWrite(buzz, LOW);
      state = true;
      Serial.println(myRTC.hours);
      Serial.println(":");
      Serial.print(myRTC.minutes);
      Serial.print(":");
      Serial.println(myRTC.seconds);
      Serial.println(" ---> Turning ON Reley, if it was turned OFF");
    }
  }
  else if (myRTC.hours >= 0 && myRTC.hours < 4 ) {
    if (state == false) {
      digitalWrite(rly, LOW);
      digitalWrite(buzz, HIGH);
      delay(125);
      digitalWrite(buzz, LOW);
      state = true;
      Serial.println(myRTC.hours);
      Serial.println(":");
      Serial.print(myRTC.minutes);
      Serial.print(":");
      Serial.println(myRTC.seconds);
      Serial.println(" ---> Turning ON Reley, if it was turned OFF");
    }
  }


  else if (myRTC.hours >= 4 && myRTC.hours <= 17) {
    if (state == true) {

      digitalWrite(rly, HIGH);
      digitalWrite(buzz, HIGH);
      delay(125);
      digitalWrite(buzz, LOW);
      state = false;
      Serial.println(myRTC.hours);
      Serial.println(":");
      Serial.print(myRTC.minutes);
      Serial.print(":");
      Serial.println(myRTC.seconds);
      Serial.println(" ---> Turning ON Reley, if it was turned OFF");
    }
  }


  else if (myRTC.hours >= 23) {
    if (state == true) {

      digitalWrite(rly, HIGH);
      digitalWrite(buzz, HIGH);
      delay(125);
      digitalWrite(buzz, LOW);
      state = false;
      Serial.println(myRTC.hours);
      Serial.println(":");
      Serial.print(myRTC.minutes);
      Serial.print(":");
      Serial.println(myRTC.seconds);
      Serial.println(" ---> Turning OFF Reley, if it was turned ON");
    }
  }



}


/*
   Arduino UNO

  Sketch uses 3028 bytes (9%) of program storage space. Maximum is 32256 bytes.
  Global variables use 317 bytes (15%) of dynamic memory, leaving 1731 bytes for local variables. Maximum is 2048 bytes.
*/
