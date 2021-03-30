#include <Arduino.h>
#include <ESP8266WiFi.h>


void setup()
{
	Serial.begin(115200);
	pinMode(0, OUTPUT);
	Serial.println("\n\n\n");
}

void loop()
{
Serial.println("========== ON ===========");
digitalWrite(0, HIGH);
delay(1000*1000)   // ทำงาน 1 นาที     
Serial.println("========== OFF ===========");
digitalWrite(0, LOW);
delay(7200*1000) // หยุดทำงาน 120 นาที
}


