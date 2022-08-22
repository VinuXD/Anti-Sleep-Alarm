// Initialising variables
const int button = 3;
const int buzzer = 5;

void setup() {
  pinMode(button, INPUT); // Button as Input
  pinMode(buzzer, OUTPUT); // Buzzer as Output
}

void loop() {
restart: // restart: flag to start the program again
  for (int i = 1; i <= 20; i++) { // To check if the user presses the button in 10 seconds delay
    delay(500); // for loop's 20 and delay's 500 milliseconds => 20 * 500 = 10 Seconds
    if (digitalRead(button) == 1) // checking the button's value
      goto restart; // Going back to restart the countdown
  }
  toneBuzzer();
}

// toneBuzzer() function will sound buzzer for 2 seconds
void toneBuzzer() {
  digitalWrite(buzzer, HIGH);
  delay(2000);
  digitalWrite(buzzer, LOW);
}
