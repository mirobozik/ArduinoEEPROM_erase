#include <EEPROM.h>

#define EEPROM_CAPACITY 512
#define PIN_LED 13

void setup()
{	
	eraseEeprom(EEPROM_CAPACITY);
}

void loop()
{
}

void eraseEeprom(unsigned int capacity)
{
	pinMode(PIN_LED, OUTPUT);
	digitalWrite(PIN_LED, HIGH);
	for (int i=0; i < capacity; i++)
	{
		EEPROM.write(i, 0xff);
		delay(20);
	}
	digitalWrite(PIN_LED, LOW);
}
