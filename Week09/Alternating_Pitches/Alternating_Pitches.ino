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
