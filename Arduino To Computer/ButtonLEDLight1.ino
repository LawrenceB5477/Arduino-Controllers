/*
  Button

 Turns on and off a light emitting diode(LED) connected to digital
 pin 13, when pressing a pushbutton attached to pin 2.


 The circuit:
 * LED attached from pin 13 to ground
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground

 * The arduino writes to the serial port each time the button is pressed, 
 perfect to use as a base for a controller. 


 created 2005
 by DojoDave <http://www.0j0.org>
 modified 18 6 2017
 by evilFrog
*/

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status
bool buttonPrint = true;

void setup() {
  Serial.begin(9600); 
  // initialize the LED as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);

    //Output to serial 
    if (buttonPrint) {
      Serial.println(1);
      buttonPrint = false; 
    }
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    if (buttonPrint == false) {
      buttonPrint = true; 
    }
  }
}
