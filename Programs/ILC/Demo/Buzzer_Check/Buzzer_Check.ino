
/*
   This Code is created by Prabhas Kumar on 20th may'21 @ 01.55

   This is the part of project ILC.

   It is Check Program of ILC-Buzzer!

   Reley ---> D4 Buzzer ---> D11 || RTC --->  CLK: D5; DAT: D6; RST: D7

   The Source(s) is/are - https://bit.ly/3wfzjuP

   Note - The Source(s) is/are collection of all used in this project!

   Name of program - ILC.ino
*/


#define buzz 11 // Buzzer

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(buzz, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(buzz, HIGH);

  delay(125);

  digitalWrite(buzz, LOW);

  delay(125);

}


/*
   Arduino UNO

  Sketch uses 1874 bytes (5%) of program storage space. Maximum is 32256 bytes.
  Global variables use 184 bytes (8%) of dynamic memory, leaving 1864 bytes for local variables. Maximum is 2048 bytes.
*/
