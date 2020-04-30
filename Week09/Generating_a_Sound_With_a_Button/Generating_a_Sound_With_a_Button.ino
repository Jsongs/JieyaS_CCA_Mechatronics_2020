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
