int piezo = 5;
int bewegung = 7;
int bewegungsstatus = 0;

void setup()
{
  pinMode(piezo, OUTPUT);
  pinMode(bewegung, INPUT);
}

void loop()
{
  bewegungsstatus=digitalRead(bewegung);
if (bewegungsstatus == HIGH)
{
digitalWrite(piezo, HIGH);
delay(5000);
digitalWrite(piezo, LOW);
}
else
{
digitalWrite(piezo, LOW);
}
}
