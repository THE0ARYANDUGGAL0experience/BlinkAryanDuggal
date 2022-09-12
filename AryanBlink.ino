void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  // put your setup code here, to run once:

}

void dot() { // this function is for a short blink / dot. A dot represents one unit.
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500); // blink for 1 second 
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

void dash() { // this function is for a long blink / dash. A dash represents three units.
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

void loop() {

  // put your main code here, to run repeatedly: // this constant time gap is for space between dots and dashes
  int const bigGap = 2000; // this constant time gap is for space between two letters

  //A
  dot();
  dash();
  delay(bigGap);
  //R
  dot();
  dash();
  dot();
  delay(bigGap);
  //Y
  dash();
  dot();
  dash();
  dash();
  delay(bigGap);
  //A
  dot();
  dash();
  delay(bigGap);
  //N
  dash();
  dot();
  delay(bigGap);
}
