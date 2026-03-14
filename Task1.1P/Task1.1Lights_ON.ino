// Linda's home lights program
// Enables pressed button to turn on two led lights; one for 30 seconds and the other for 60 seconds.

// Pin definitions 
const int porch_led= 9; 
const int hall_led= 8; 
const int user_switch= 2;


// Setup function
void setup() {
  pinMode(porch_led, OUTPUT);
  pinMode(hall_led, OUTPUT);
  pinMode(user_switch, INPUT_PULLUP);
}

// Looped function
void loop() {
if (digitalRead(user_switch) == LOW) {
    linda_timed_lights();

}
// Module
void linda_timed_lights() {
digitalWrite(porch_light, HIGH);
digitalWrite(hall_light, HIGH);  

delay(30000);
digitalWrite(porch_light, LOW);

delay(30000);
digitalWrite(hall_light, LOW);

}  

