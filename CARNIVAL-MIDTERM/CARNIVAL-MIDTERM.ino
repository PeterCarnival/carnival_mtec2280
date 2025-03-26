const int ledPinR = 5;
const int ledPinG = 6;
const int ledPinB = 7;
const int buttonPin = 15;
const int piezioPin = 16;
bool red = false;
bool green = false;
bool blue = false;
bool buttonPressed = false;
const int potPin = 18; //Change accordingly
const int potVal = 0;

void setup()
 {
  Serial.begin(115200);

  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(piezioPin, OUTPUT);
  
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW); 
   
  
}

void loop() 
{
potVal = analogRead(potPin);
if(digitalRead(buttonPin)== LOW){
  if(!red && !green && !blue){
    red = true;
    green = false;
    blue = false;
    digitalWrite(piezioPin, LOW);
  }
  else if(red){
    red = false;
    green = true;
    blue = false;
    digitalWrite(piezioPin, LOW);
  }
  else if(green){
    red = false;
    green = false;
    blue = true;
    digitalWrite(piezioPin, LOW);
  }
   else if(blue){
    red = false;
    green = false;
    blue = false;
    digitalWrite(piezioPin, HIGH);
  }

  if(red){
   tone(piezioPin, 2000, potVal);
  }
  else if (green){
    tone(piezioPin, 3000, potVal);
  }
  else if (blue){
    tone(piezioPin, 4000,potVal);
  }

  

  digitalWrite(ledPinR, red ? HIGH : LOW);
  digitalWrite(ledPinG, green ? HIGH : LOW);
  digitalWrite(ledPinB, blue ? HIGH : LOW);
} 




}
