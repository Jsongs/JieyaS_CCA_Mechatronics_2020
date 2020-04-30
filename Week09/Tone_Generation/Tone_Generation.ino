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
