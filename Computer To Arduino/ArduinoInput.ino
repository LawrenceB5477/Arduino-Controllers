//Base class for reading serial input. In this example, the led lights up if it is reading input. 

int led = 13; 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  pinMode(led, OUTPUT); 
}

void loop() {
  if (Serial.available() > 0) {
    switch(Serial.read())
    {
      case '1': digitalWrite(led, HIGH); 
        break; 
      case '0': digitalWrite(led, LOW); 
        break; 
      default: break; 
    }
  }

}
