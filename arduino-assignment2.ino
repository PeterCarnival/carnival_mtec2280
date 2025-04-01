const int buttonPin =9;

bool buttonState =0;
bool lastButtonState =0;

int counter =0;
int maxCount =10;


void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin, INPUT_PULLUP);
pinMode(ledPin, OUTPUT);
//hook up one of button to GND, other end to pin 9
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:

buttonState =!digitalRead(buttonPin); //flips with NOT LOGIC due to pullup

if (buttonState && !lastButtonState)
{
  counter ++; 
}
if (counter > maxCount)
{
  counter =0; //reset counter
}
lastButtonState = buttonState;
Serial.printf("Button =%1 \t Count %i \n", buttonState, counter);
}
