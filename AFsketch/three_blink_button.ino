const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin1 =  13;      // the number of the LED pin
const int ledPin2 =  10;      // the number of the LED pin
const int ledPin3 =  8;      // the number of the LED pin

int varTime = A5;
int delayTime = 0;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);  
  
  pinMode(buttonPin, INPUT);    
  pinMode(varTime, INPUT);
}


void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {     
    // turn LED on:    
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);  
    digitalWrite(ledPin3, HIGH);

    
    delayTime = analogRead(varTime);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);               // wait for a second
  digitalWrite(ledPin1, HIGH);    // turn the LED off by making the voltage LOW
 
  delay(delayTime);               // wait for a second
    digitalWrite(ledPin2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);               // wait for a second
     digitalWrite(ledPin3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);               // wait for a second
  
  digitalWrite(ledPin3, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);               // wait for a second
 
    digitalWrite(ledPin2, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);               // wait for a second
 
  digitalWrite(ledPin1, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);               // wait for a second
 
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin1, LOW); 
    digitalWrite(ledPin2, LOW); 
    digitalWrite(ledPin3, LOW); 
  }
}
