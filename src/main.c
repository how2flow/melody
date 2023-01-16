#include <wiringPi.h>
#include <softTone.h>
#include <stdio.h>

#include "melody.h"

#define PIN 3

int main()
{
	int value;

	wiringPiSetup();
	softToneCreate(PIN);
	while (1) {
		Do(PIN, 4, T4);
		Re(PIN, 4, T4);
		Mi(PIN, 4, T4);
		Fa(PIN, 4, T4);
		Sol(PIN, 4, T4);
		Ra(PIN, 4, T4);
		Si(PIN, 4, T4);
	}

	return 0;
}
