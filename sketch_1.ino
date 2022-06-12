const int buttonPin = 9; const int buttonRojo = 7; #include “pitches.h”
int buttonState = 0;
int buttonStateRojo = 0; int melodyButton[] = {
  NOTE_C2
};
int melodyButtonRojo[] = { NOTE_C4
                         };
int noteDurations[] = {
  8
};
int thisNote = 0; int otherNote = 0; void setup() {
  // initialize the pushbutton pin as an input: pinMode(buttonPin, INPUT); pinMode(buttonRojo, INPUT);
}
void loop() {
  //botó negre
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    for (int thisNote = 0;
         thisNote < 8;
         thisNote++) {
      int noteDuration = 1000 / noteDurations[thisNote]; tone(8, melodyButton[thisNote], noteDuration);
    }
  } else {}
  //botó vermell
  buttonStateRojo = digitalRead(buttonRojo);
  if (buttonStateRojo == HIGH) {
    for (int otherNote = 0;
         otherNote < 8;
         otherNote++) {
      int noteDuration = 1000 / noteDurations[otherNote]; tone(8, melodyButtonRojo[otherNote], noteDuration);
    }
  } else { }
}
