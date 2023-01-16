#include <wiringPi.h>
#include <softTone.h>

#include "melody.h"

static int melodyf[MELODY][OCTAVE] ={
	{16, 33,  65, 131, 262, 523, 1047, 2093, 4186}, // C
	{17, 35,  69, 139, 278, 554, 1109, 2218, 4435}, // C#
	{18, 37,  73, 147, 294, 587, 1175, 2349, 4699}, // D
	{20, 39,  78, 156, 311, 622, 1245, 2489, 4978}, // D#
	{21, 41,  82, 165, 330, 659, 1319, 2637, 5274}, // E
	{22, 44,  87, 175, 349, 699, 1397, 2794, 5588}, // F
	{23, 46,  93, 185, 370, 740, 1475, 2960, 5920}, // F#
	{25, 49,  98, 196, 392, 784, 1568, 3136, 6272}, // G
	{26, 52, 104, 208, 415, 831, 1661, 3322, 6645}, // G#
	{28, 55, 110, 220, 440, 880, 1760, 3520, 7040}, // A
	{29, 58, 117, 233, 466, 932, 1865, 3729, 7459}, // A#
	{31, 62, 124, 247, 494, 988, 1976, 3951, 7902}  // B
};

void Do(int pin, int octave, int times)
{
	int freq;

	freq = melodyf[0][octave];
	softToneWrite(pin, freq);
	delay(times);
}

void Do_(int pin, int octave, int times)
{
	int freq;

	freq = melodyf[1][octave];
	softToneWrite(pin, freq);
	delay(times);
}

void Re(int pin, int octave, int times)
{
	int freq;

	freq = melodyf[2][octave];
	softToneWrite(pin, freq);
	delay(times);
}

void Re_(int pin, int octave, int times)
{
	int freq;

	freq = melodyf[3][octave];
	softToneWrite(pin, freq);
	delay(times);
}

void Mi(int pin, int octave, int times)
{
	int freq;

	freq = melodyf[4][octave];
	softToneWrite(pin, freq);
	delay(times);
}

void Fa(int pin, int octave, int times)
{
	int freq;

	freq = melodyf[5][octave];
	softToneWrite(pin, freq);
	delay(times);
}

void Fa_(int pin, int octave, int times)
{
	int freq;

	freq = melodyf[6][octave];
	softToneWrite(pin, freq);
	delay(times);
}

void Sol(int pin, int octave, int times)
{
	int freq;

	freq = melodyf[7][octave];
	softToneWrite(pin, freq);
	delay(times);
}

void Sol_(int pin, int octave, int times)
{
	int freq;

	freq = melodyf[8][octave];
	softToneWrite(pin, freq);
	delay(times);
}

void Ra(int pin, int octave, int times)
{
	int freq;

	freq = melodyf[9][octave];
	softToneWrite(pin, freq);
	delay(times);
}

void Ra_(int pin, int octave, int times)
{
	int freq;

	freq = melodyf[10][octave];
	softToneWrite(pin, freq);
	delay(times);
}

void Si(int pin, int octave, int times)
{
	int freq;

	freq = melodyf[11][octave];
	softToneWrite(pin, freq);
	delay(times);
}
