void setup() {
  pinMode(LED_BUILTIN, OUTPUT);	     // init pin to OUTPUT
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);                        // wait for 200ms
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(200);		    	     // wait for 200ms
}
