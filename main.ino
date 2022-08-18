// Initialising variables
const int button = 3;
const int buzzer = 5;

void setup() {
  pinMode(button, INPUT); // Button as Input
  pinMode(buzzer, OUTPUT); // Buzzer as Output
  Serial.begin(9600); // Setting up Serial Port
}

void loop() {
restart: // restart: flag to start the program again
  Serial.println("WAITING");
  for (int i = 1; i <= 1000; i++) { // To check if the user presses the button in 10 seconds delay
    Serial.println(i);
    delay(10); // for loop's 1000 and delay's 10 => 1000 * 10 = 10 Seconds
    if (digitalRead(button) == 1) // checking the button's value
      goto restart; // Going back to restart the countdown
  }
  toneBuzzer();
}

// toneBuzzer() function will sound buzzer for 2 seconds
void toneBuzzer() {
  Serial.println("ALARM RINGING");
  digitalWrite(buzzer, HIGH);
  delay(2000);
  digitalWrite(buzzer, LOW);
}
