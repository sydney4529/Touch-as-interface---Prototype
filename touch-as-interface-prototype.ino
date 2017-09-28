/*

The Teddy Bear

Sydney Pallister, Tania Samokhvalova, Vivian Fu

September 28th, 2017

Used sketch by Tom Igoe based on a snippet from Greg Borenstein as a base.

 */

//references additional tab for notes
#include "pitches.h"
 

// notes in the melody:
int melody0[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};


 //notes in the melody:
int melody1[] = {
  NOTE_GS6, NOTE_A6, NOTE_GS6, NOTE_E6, NOTE_GS6, NOTE_A6, NOTE_GS6, NOTE_E6
};

 //notes in the melody:
int melody2[] = {
  NOTE_B0, NOTE_B1, NOTE_CS2, NOTE_B1, NOTE_F1, NOTE_C6, NOTE_B1, NOTE_B1
};


int melody3[] = {
  NOTE_A1, NOTE_B1, NOTE_A1, NOTE_D1, NOTE_F1, NOTE_E1, NOTE_B1, NOTE_DS8
};


// notes in the melody:
int melody4[] = {
  NOTE_C1, NOTE_C2, NOTE_E3, NOTE_DS8, NOTE_CS8, NOTE_B7, 0, NOTE_AS5
};

//notes in the melody:
int melody5[] = {
  NOTE_DS8, NOTE_DS8, 0, NOTE_B5, NOTE_G5, NOTE_B4, NOTE_F6, NOTE_A6
};

//notes in the melody:
int melody6[] = {
  NOTE_AS5, NOTE_GS7, NOTE_D8, NOTE_F1, NOTE_C1, NOTE_E2, NOTE_A2, NOTE_AS5
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations0[] = {
  8, 8, 8, 8, 8, 8, 8, 8
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations1[] = {
  8, 8, 8, 8, 8, 8, 8, 8
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations2[] = {
  4, 4, 4, 4, 8, 8, 4, 8
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations3[] = {
  4, 4, 4, 4, 8, 8, 4, 8
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations4[] = {
  4, 4, 4, 4, 8, 8, 4, 8
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations5[] = {
  4, 8, 8, 4, 8, 8, 4, 8
};

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations6[] = {
  8, 4, 4, 4, 8, 8, 4, 8
};


void setup() {

  //starts the serial read to record values
  Serial.begin(9600);

}

void loop() {

  //assigns each anolog pin a variable name to reference
  int sensorValue0 = analogRead(A0);
  int sensorValue1 = analogRead(A1);
  int sensorValue2 = analogRead(A2);
  int sensorValue3 = analogRead(A3);
  int sensorValue4 = analogRead(A4);
  int sensorValue5 = analogRead(A5);

  
  // print out the value you read:
  Serial.println(sensorValue0);
  Serial.println(sensorValue1);
  Serial.println(sensorValue2);
  Serial.println(sensorValue3);
  Serial.println(sensorValue4);
  Serial.println(sensorValue5);

  //sets the left ear sensor to play a set sound when the resistence of the pressure sensitive fabric reaches a certain point
  if (sensorValue0 <= 750){

  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations0[thisNote];
    tone(7, melody0[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(7);
  }
}

  //sets the left foot sensor to play a set sound when the resistence of the pressure sensitive fabric reaches a certain point
  if (sensorValue1 <= 700){

  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations1[thisNote];
    tone(7, melody1[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(7);
  }
}

  //sets the right foot sensor to play a set sound when the resistence of the pressure sensitive fabric reaches a certain point
  if (sensorValue2 <= 620){

  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations2[thisNote];
    tone(7, melody2[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(7);
  }
}

  //sets the left arm sensor to play a set sound when the resistence of the pressure sensitive fabric reaches a certain point
  if (sensorValue3 <= 530){

  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations3[thisNote];
    tone(7, melody3[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(7);
  }
}

  //sets the right arm sensor to play a set sound when the resistence of the pressure sensitive fabric reaches a certain point
  if (sensorValue4 <= 720){

  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations4[thisNote];
    tone(7, melody4[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(7);
  }
}

  //sets the right ear sensor to play a set sound when the resistence of the pressure sensitive fabric reaches a certain point
  if (sensorValue5 <= 650){

  // iterate over the notes of the melody:
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / noteDurations5[thisNote];
    tone(7, melody5[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // stop the tone playing:
    noTone(7);
  }
}

   
}

