// -----------------------------------
// Example - 04: Motor Shaking when Magnet Approaching
// -----------------------------------

// name the pins
#define HALLPIN D2
#define MOTORPIN A4

// This routine runs only once upon reset
void setup()
{
  pinMode(HALLPIN, INPUT);                            
  pinMode(MOTORPIN, OUTPUT);                          
}

// This routine loops forever
void loop()
{
  int val = digitalRead(HALLPIN);               // read the hall sensor pin

  if(val == 0)                                  // if magnet detected
    digitalWrite(MOTORPIN, HIGH);               // let the motor vibrate
  else
    digitalWrite(MOTORPIN, LOW);                // stop it
  delay(50);
}
