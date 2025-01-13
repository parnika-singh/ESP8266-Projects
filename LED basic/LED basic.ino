const int buttonPin = 0;  // the number of the pushbutton pin
const int ledPin = 2;    // the number of the LED pin
// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status

void setup() {
  // put your setup code here, to run once:
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
         digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    delay(1000);
     digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
    digitalWrite(ledPin, HIGH);
    delay(1000);
 
  }

}
