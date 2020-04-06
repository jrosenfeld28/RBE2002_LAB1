#include "button.h"
#include "Zumo32U4.h"
Zumo32U4LCD lcd;

const int buttonPin = 14; //button A on the Romi
int buttonCount = 0;
int buttonState = digitalRead(buttonPin);


void setup() 
{
  
  Serial.begin(115200);
  Serial.println("Let's hope this works!");
  lcd.clear();
  lcd.print("Have Fun!");
  
}



void loop() 
{

  if(digitalRead(buttonPin) == HIGH && buttonState == LOW) 
  {
    Serial.print("button pressed ");
    Serial.print(++buttonCount);
    Serial.println(" times");

    lcd.clear();
    lcd.print(buttonCount);
    buttonState = HIGH;
  }
  else if(digitalRead(buttonPin) == LOW && buttonState == HIGH)
  {
    buttonState = LOW;
  }



}
