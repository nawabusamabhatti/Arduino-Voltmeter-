#include <Blynk.h>

int RPM = 128;
void setup()
{
 pinMode(A0, INPUT);
 pinMode(2, OUTPUT);
 Serial.begin(9600);

}

void loop()
{
 float Current;

 Current = analogRead(A0)*5/1024;
 Serial.println(Current);

}
