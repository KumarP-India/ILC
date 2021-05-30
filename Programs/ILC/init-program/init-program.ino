
/*
   This Code is created by Prabhas Kumar on 20th may'21 @ 00.55

   This is the part of project ILC.

   It is used to set the time in RTC Module.

   NEVER EVER upload this program, unless need to reewrite/configure the module,

   after the ILC is installed!

   For connection refer to main code!

   The Source(s) is/are - https://bit.ly/3wfzjuP

   Note - The Source(s) is/are collection of all used in this project!

   Name of program - init-program.ino
*/



#include <virtuabotixRTC.h> // The lib. used for RTC module


virtuabotixRTC myRTC(5, 6, 7); // The pin initialization of module



void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);


  // Set the current date, and time in the following format:
  // seconds, minutes, hours, day of the week, day of the month, month, year
  //myRTC.setDS1302Time(30, 30, 17, 1, 30, 5, 2021);
}



void loop() {
  // put your main code here, to run repeatedly:


  // The Program of uploading or displaying data to Serial monitor for test in loop

  myRTC.updateTime(); // This updates the variables of module


  // Priting the datas to Serial monitor

  Serial.print("Current Date / Time: ");

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


  delay(1000); // Delay so the program doesn't print non-stop
}

/*
   Arduino Nano

   Sketch uses 3174 bytes (10%) of program storage space. Maximum is 30720 bytes.
   Global variables use 233 bytes (11%) of dynamic memory, leaving 1815 bytes for local variables. Maximum is 2048 bytes.
*/
