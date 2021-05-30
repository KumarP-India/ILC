# ILC
## Invertor Light Controller by Prabhas Kumar & assisted by Mr. Prajapati Kumar

# Story
In my house we have Invertor with battery as backup, like UPS, for difference between Diesal AC-Genarator and Main Electric Suply for sensitive components like PC, TV etc. We have one LED bulb that is connected to Invertor. At night we turn it on as if Main Supply is been cut & genarator isn't turned on, we could have one LED bulb on so we didn't get injured because of dark.

So I thought 💡 about what if I put Realy between the bulb and with the RTC. So from there I started to work on ILC!


# Working

Arduino is powered with either generator or Main-Supply. So it will turned of as soon as Electricity is gone. That why I reverse the working of relay. I set the wires between NC & COM of relay. Whenever I give power to Relay, it breaks the circuit. This way I achieve:


 Time                During Electricity or AC- Generator               During Invertor only

1.Daylight           OFF -- Arduino powering the Relay                ON -- NO Power to relay

2.Night              On -- Arduino stops powering the Relay               -- do --


# Hardware

1. Arduino for controling the Relay with respect to time
2. Relay for Truning ON or OFF the AC - Bulb
3. RTC for Time
4. Buzzer or LED for indication(optional) ---> I do recommend Buzzer as Arduino already have Power LED(s)
5. 3-D body (I use 3-D Model, but you can use Wood too)
6. Hanger or Strong Double sided tape
7. PCB or Breadbord(You can also do directly Arduino Board; You have to give some kind of glue to place the wire at place)
8. Jumper cabels, DC-wires & AC wires
9. Zip-ties(Optional -- But good for neatness)
10. Heat Shrink Tubes or Insulation tapes
11. Heat gun(optional)
12. Soldering Station(only for PCB)
13. Power adapter(I used Smartphone charger with USB--Arduino Data cabel)
14. Coin cell Battery for RTC

Your AC holder whould have 3 wires, 2 wires(mine Blue) connected to one screw hole & one wire(mine red) wire to another. 

Take the 2nd one wire(Red) out of the screw hole & with help of Twisted Technique join it with one open wire.

Take another open wire and placed it in bulb open screw hole(Red).

Now Join other open Wire ends to NC & COM of Relay.

Connect the VCC & Gnd of both Relay & RTC to respective lines comming from Arduino.

Connect Relay Signal pin to Digital 4.

Connect the CLK, DAT, RST of RTC to Digital 5, 6, 7 respectively.

connect the Ground/- of Active Buzzer to Gnd line of Arduino & +ve to 11.

Paste the Above Circuit with all components to your 3-D Incloser/Box with Double Sidded Tape(3 mm).

Take the USB -- Arduino Data Cabel and connect it to arduino and your power source, mine 5V DC power adapter.


# Software

Download the Repo and Sketch--->Include Lib.--->Add .ZIP lib. ===> Go to ./Lib(s)/ArduinoRTClibrary-master.zip

Run all the program in ./Programs/ILC/Demo/ to check the connection and Buuzer + Relay

Run the program in ./Programs/ILC/init-program with setting the time & Date on 40th line (Uncomment it first ---> Set the Time & Date ---> Upload it ---> Comment it out ---> Again Upload it so that it doesnot set the ime again).

If all gone good. Then upload the ./Programs/ILC/Main-Program/ILC. Change the Time acaroding to your schdule. Use Comments as help!

Please Cheack other Documents as referance & I also include my 3-D model!

# Proof

![My Build-1](https://github.com/Uniquely-Rare/ILC/Pic/IMG_20210530_191834.jpg)
![My Build-2](https://github.com/Uniquely-Rare/ILC/Pic/IMG_20210530_191839.jpg)
![My Build-3](https://github.com/Uniquely-Rare/ILC/Pic/IMG_20210530_191843.jpg)
![My Build-4](https://github.com/Uniquely-Rare/ILC/Pic/IMG_20210530_191848.jpg)
![My Build-5](https://github.com/Uniquely-Rare/ILC/Pic/IMG_20210530_191855.jpg)
