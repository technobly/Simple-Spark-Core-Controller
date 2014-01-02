bool state = HIGH;

void setup() {
    pinMode(D7,OUTPUT);
    digitalWrite(D7,HIGH); // turn on D7 by default
    Spark.function("test", testFunction);
}

void loop() {
	// do nothing
}

int testFunction(String args) {
    state = !state; // toggle the state
    digitalWrite(D7,state); // update the LED so we can see some action
    return 200; // This is checked in the web app controller for validation
}