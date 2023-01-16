#ifndef __MELODY_H__
#define __MELODY_H__

#define MELODY 13
#define OCTAVE 9
#define BPM 120

#define T4  (60000 / BPM)
#define T2  (T4 * 2)
#define T8  (T4 / 2)
#define T16 (T4 / 4)

void Do(int pin, int octave, int times);
void Do_(int pin, int octave, int times);
void Re(int pin, int octave, int times);
void Re_(int pin, int octave, int times);
void Mi(int pin, int octave, int times);
void Fa(int pin, int octave, int times);
void Fa_(int pin, int octave, int times);
void Sol(int pin, int octave, int times);
void Sol_(int pin, int octave, int times);
void Ra(int pin, int octave, int times);
void Ra_(int pin, int octave, int times);
void Si(int pin, int octave, int times);
#endif
