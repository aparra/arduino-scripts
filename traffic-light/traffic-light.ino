int red = 10;
int yellow = 9;
int green = 8;

void setup(){
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(green, OUTPUT);
}

void loop(){
    changeLights();
    delay(15000);
}

void changeLights(){
	turnOffGreenTurnOnYellow();
    turnOffYellowTurnOnRed();
    turnOffRedTurnOnGreen();
}

void turnOffGreenTurnOnYellow() {
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    delay(3000);
}

void turnOffYellowTurnOnRed() {
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    delay(5000);
}

void turnOffRedTurnOnGreen() {
    // red and yellow on for 2 seconds
    digitalWrite(yellow, HIGH);
    delay(2000);

    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);

    digitalWrite(green, HIGH);
    delay(3000);
}
