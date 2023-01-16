#include <wiringPi.h>
#include <softTone.h>
#include <stdio.h>

#include "melody.h"
#include "songs.h"

#define PIN 3

int main()
{
	int value;

	wiringPiSetup();
	softToneCreate(PIN);
	while (1) {
		test_buzzer(PIN, 4);
	}

	return 0;
}
