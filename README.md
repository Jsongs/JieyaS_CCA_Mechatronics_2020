# JieyaS_CCA_Mechatronics_2020
homework

# Week 1
![Week1](/Week01/1.JPG)
![Week1](/Week01/2.JPG)
![Week1](/Week01/3.gif)
![Week1](/Week01/4.gif)
![Week1](/Week01/5.gif)

# Week 2
![Week2](/Week02/1.JPG)
![Week2](/Week02/2.JPG)
![Week2](/Week02/3.JPG)
![Week2](/Week02/4.JPG)
![Week2](/Week02/5.JPG)
![Week2](/Week02/6.gif)

# Week 3
![Week3](/Week03/1.jpg)
![Week3](/Week03/2.gif)

# Week 4
![Week4](/Week04/IMG-3890.gif)
```cpp
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(8/l00);                       // wait for a second
  
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(0);                       // wait for a second
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(0);                       // wait for a second
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(0);                       // wait for a second
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(0);                       // wait for a second
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second

  digitalWrite(12, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(0);                       // wait for a second
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(0);                       // wait for a second
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(0);                       // wait for a second
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(0);                       // wait for a second
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(12, LOW);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(500);                       // wait for a second
}
```

# Week 5
![Week5](/Week05/1.gif)
![Week5](/Week05/2.gif)
```cpp
int ledPin = 9;    // LED connected to digital pin 9

void setup() {
  // nothing happens in setup
}

void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }

   digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(50);                       // wait for a second
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(50);                       // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(0);                       // wait for a second
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(0);                       // wait for a second
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(0);                       // wait for a second
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second

  
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
  delay(0);                       // wait for a second
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second

  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(0);                       // wait for a second
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(0);                       // wait for a second
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(0);                       // wait for a second
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= 5) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(30);
  }
  
}
```

# Week 6
![Week6](/Week06/1.gif)
![Week6](/Week06/2.jpg)
```cpp

#include <IRremote.h>
#include <Servo.h>
int IRpin = 11;  // pin for the IR sensor
IRrecv irrecv(IRpin);
decode_results results;
Servo myservo;
void setup()
{
 Serial.begin(9600);
 irrecv.enableIRIn(); // Start the receiver
 myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}
void loop() 
{
 if (irrecv.decode(&results)) 
   {
     irrecv.resume();   // Receive the next value
   }
  if (results.value == 33441975)  // change according to your IR remote button number
    {
      myservo.write(0);
      delay(15);
    }
    if (results.value == 33446055)  // change according  to your IR remote button number
    {
      myservo.write(30);
    delay(15);
    }
    
}     
```

# Week 7
![Week7](/Week07/1.jpg)
![Week7](/Week07/2.JPG)
![Week7](/Week07/3.jpg)
![Week7](/Week07/4.jpg)
![Week7](/Week07/5.jpg)
![Week7](/Week07/6.gif)
```cpp
#include <NewPing.h>
#include <Servo.h>

const int ServoPin = 11;
const int TriggerPin = 3;
const int EchoPin = 2;

// 100 = maxDistance
NewPing sonar(TriggerPin, EchoPin, 100);
Servo servo;

void setup() {
  Serial.begin(9600);
  servo.attach(ServoPin);
}

void loop() {
  int cm = sonar.ping_cm();
  Serial.println(cm);

  int angle = map(cm, 2, 15, 0, 180);
  servo.write(angle);
  
  delay(60);
}
```
! Youtube Link https://youtu.be/c2PLC_cxuFs

# Week 8
## Final Project Proposal
#### · For the final project I am interested in making a musical instrument. It can be playing normal sounds
#### · Using multiple capacitive touch objects to create a keyboard instrument.
#### · Optional: Using MIDI control to add more opputunities.

#### Capacitive materials
- Electric Paint                     20$
- Foil paper                         3$
- Water                              free
- Cans                               free(Out of stock)
- Capacitive touch sensing button    2$

#### Posible Forms
![Week8](/Week08/1.jpeg)
![Week8](/Week08/2.jpeg)
![Week8](/Week08/3.jpeg)

#### Posible Ideas
- Each sensor represents one sound, play it like how you would play a instrument normally.
- Each sensor represents a segment of melody/music, creating music by combining segments of musics together.

# Week 9
### All videos taken this week needs to be viewed with sound, I have taken 1 video shot for each coding, they are all MP4 format with the same name as the titles below, check under Week 9 folder in order to see them visually.
### GIF format does not support any sound, sorry for the inconvenience.
## Learning Simple Tone Generation
![Week9](/Week09/1.png)
```cpp
void setup() //No information needed in the setup
//the output gets automatically defined with the “tone” command

{
}

void loop()
{
tone(8, 100); // The"tone ( x , y )" command creates a sound
delay(1000); // with the duration of one second
noTone(8); // The tone is deactivated
delay(1000); // for one second
}
```

## Alternating Pitches
### The arduino setting remain the same as tone generation, only difference is coding.
```cpp
void setup()
{
}
void loop()
{
tone(8, 100);
delay(1000);
noTone(8); // This causes the first tone to stop
tone(8, 200); //The second tone with the pitch “200” starts
delay(1000); //for one second 
noTone(8); //With this line the second tone stops and the loop starts over with 
//the first tone
}
```

## Generating a sound with a button
![Week9](/Week09/2.jpg)
![Week9](/Week09/3.png)
```cpp
int button1=6;
int buttonstatus=0;

void setup()
{
pinMode(button1, INPUT);
}

void loop()
{
buttonstatus = digitalRead(button1);
if (buttonstatus == HIGH)
{
tone(8, 300);
noTone(8);
}
}
```
### After I add the button, the sound that the buzzer make is very weak and sounds like its about to die soon, but I could not figure out why.

# Week 10
## This week I was learning how to produce sound on more than one button
### I have taken 1 video for this week, it needs to be viewed with sound, check under Week 10 folder in order to see it visually.
### A mistake that I made: When I add the second button, I left the buzzer in between the two buttons, and it did not work. So I moved the buzzer all the way on the side and everything worked fine.
![Week10](/Week10/1.jpg)
![Week10](/Week10/2.png)
```
int button1=6; // button1 is connected to pin6 void loop()
int button2=7; // button2 is connected to pin7
int buttonstatus1=0; //variable to save the status of button1
int buttonstatus2=0; //variable to save the status of button2

void setup()
{
pinMode(button1, INPUT); //button1 is an input
pinMode(button2, INPUT); //button2 is an input
}

void loop()
{
buttonstatus1 = digitalRead(button1); //get status from button1 (HIGH or LOW)
buttonstatus2 = digitalRead(button2); //get status from button2 (HIGH or LOW)

if (buttonstatus1 == HIGH) //If button1 gets pushed..
{
tone(8, 100); //...output of a tone with a pitch of 100...
delay (1000); //...one second long...
noTone(8); //...than turn it off
}

if (buttonstatus2 == HIGH) //If button2 gets pushed..
{
tone(8, 200); //...output of a tone with a pitch of 200...
delay (1000); //...one second long...
noTone(8); //...than turn it off
}
}
```

# Week 11
## FINAL WEEK!!!
### I saved Fanta cans and cut them down into small pieces.
![Week11](/Week11/1.jpg)
![Week11](/Week11/2.jpg)

### Testing how it works: I put the aluminum piece on top of jumper wire first, because both of them are relatively hard, they didnt touch well to allow electric pass thoroughly and fluently.
### I also figured out that the type of tape I use will block electric...
![Week11](/Week11/3.JPG)

### After I fixed the electric problem I found one wire which plays a weired sound, I fixed it by simply changed the tone it plays, but I did not know why it did not like the old number. https://youtu.be/CPKOIfyYXPc
### Then I changed the number for all the wire so that they sound like Do-Re-Mi...https://youtu.be/Qop_c56FbIk

### Final Piece
![Week11](/Week11/4.jpg)
### Circuit Diagram
![Week11](/Week11/5.png)

### Code
```cpp
#include <CapacitiveSensor.h>
#include "pitches.h"
#define buzzer 11

// Set the Send Pin & Receive Pin.
CapacitiveSensor   cs_12_3 = CapacitiveSensor(12,3);        
CapacitiveSensor   cs_12_4 = CapacitiveSensor(12,4);         
CapacitiveSensor   cs_12_5 = CapacitiveSensor(12,5);     
CapacitiveSensor   cs_12_6 = CapacitiveSensor(12,6);     
CapacitiveSensor   cs_12_7 = CapacitiveSensor(12,7);      
CapacitiveSensor   cs_12_8 = CapacitiveSensor(12,8);         
CapacitiveSensor   cs_12_9 = CapacitiveSensor(12,9);  
CapacitiveSensor   cs_12_10 = CapacitiveSensor(12,10);     

void setup()                    
{
  // turn off autocalibrate on channel 1 - just as an example
  cs_12_3.set_CS_AutocaL_Millis(0xFFFFFFFF);  
  cs_12_4.set_CS_AutocaL_Millis(0xFFFFFFFF); 
  cs_12_5.set_CS_AutocaL_Millis(0xFFFFFFFF); 
  cs_12_6.set_CS_AutocaL_Millis(0xFFFFFFFF); 
  cs_12_7.set_CS_AutocaL_Millis(0xFFFFFFFF); 
  cs_12_8.set_CS_AutocaL_Millis(0xFFFFFFFF); 
  cs_12_9.set_CS_AutocaL_Millis(0xFFFFFFFF);     
  cs_12_10.set_CS_AutocaL_Millis(0xFFFFFFFF); 
}

void loop()                    
{
  // Set the sensitivity of the sensors.
  long touch1 =  cs_12_3.capacitiveSensor(1000);
  long touch2 =  cs_12_4.capacitiveSensor(1000);
  long touch3 =  cs_12_5.capacitiveSensor(1000);
  long touch4 =  cs_12_6.capacitiveSensor(1000);
  long touch5 =  cs_12_7.capacitiveSensor(1000);
  long touch6 =  cs_12_8.capacitiveSensor(1000);
  long touch7 =  cs_12_9.capacitiveSensor(1000);
  long touch8 =  cs_12_10.capacitiveSensor(1000);
  
  // When we touched the sensor, the buzzer will produce a tone.
  if (touch1 > 1000){
    tone(buzzer,385);
    }  
  if (touch2 > 1000){
    tone(buzzer,370);
    }  
  if (touch3 > 1000){
    tone(buzzer,328);
  }
  if (touch4 > 1000) {
    tone(buzzer,294);
  }
  if (touch5 > 1000){
    tone(buzzer,260);
  }
  if (touch6 > 1000){
    tone(buzzer,250);
  }
  if (touch7 > 1000){
    tone(buzzer,220);
  }
  if (touch8 > 1000){
    tone(buzzer,200);
  }

  // When we didn't touch it, no tone is produced.
  if (touch1<=1000  &  touch2<=1000  &  touch3<=1000 & touch4<=1000  &  touch5<=1000  &  touch6<=1000 &  touch7<=1000 &  touch8<=1000)
    noTone(buzzer);
  delay(10);  

 }
 ```
## Thank You!
