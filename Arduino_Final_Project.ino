/*
Name: Harmanpreet Singh Sagar
Assignment: Arduino Final Project
Date: February 26th, 2021
Class: TDR 3M1
Purpose: To create a traffic signal like stop lights
*/

// Green Light connected to pin 3
int greenLight = 3;

// Yellow Light connected to pin 5
int yellowLight = 5;

// Red Light connected to pin 6
int redLight = 6;

// Orange Light connected to pin 9
int orangeLight = 9;

// Green Pedestrian Light connected to pin 10
int greenPLight = 10;

// Pushbutton connected to pin 11
int button = 11;

// Sets the amount of general light time
int lightTime = 15000;

// Sets the amount of time if button is pressed
int buttonTime = 3000;

// Sets the amount of time for the yellow light
int yellowTime = 3000;

// Time since button pressed
unsigned long changeTime;



void setup()
{
  // Configures greenLight to be an output pin
  pinMode(greenLight, OUTPUT);
  // Configures yellowLight to be an output pin
  pinMode(yellowLight, OUTPUT);
  // Configures redLight to be an output pin
  pinMode(redLight, OUTPUT);
  // Configures orangeLight to be an output pin
  pinMode(orangeLight, OUTPUT);
  // Configures greenPLight to be an output pin
  pinMode(greenPLight, OUTPUT);
  // Configures button to be an input pin
  pinMode(button, INPUT);    
}

void loop()
{
  // Summons the greenYellowFunction subroutine
  greenYellowFunction();
  
  // Switches the red light on
  digitalWrite(redLight, HIGH);
  //Switches the orange light on
  digitalWrite(orangeLight, HIGH);
  // Opens while loop
  // Loop will continue to run until either the conditions are turned false
  while (digitalRead(button) == HIGH && (millis() - changeTime) < lightTime)
  {
    // If the button is pressed, wait 3 seconds and change the lights to green
    if (digitalRead(button) == HIGH && (millis() - changeTime > 12000 && millis() - changeTime < lightTime))
    {
      delay(lightTime - (millis() - changeTime));
    }
    else
    {
      delay(buttonTime);
    }
  }
  
  // Switches the red light off
  digitalWrite(redLight, LOW);
  // Switches the orange light off
  digitalWrite(orangeLight, LOW);    
}

void greenYellowFunction()
{
  // Switches the green light on
  digitalWrite(greenLight, HIGH);
  // Switches the white light on
  digitalWrite(greenPLight, HIGH);
  // Wait 15 seconds
  delay(lightTime);
  
  // Switches the green light off
  digitalWrite(greenLight, LOW);
  // Switches the white light off
  digitalWrite(greenPLight, LOW);
  
  // Switches the yellow light on
  digitalWrite(yellowLight, HIGH);
  // Starts if statement
  // Statement will run if yellow light is on
  if(digitalRead(yellowLight) == HIGH);
  {
    // Opens for loop
    // Declares a variable orangeFlash, assigns default value and sets maximum value of less than 3 seconds
    for (int orangeFlash = 0; orangeFlash < yellowTime; orangeFlash += 1000)
    {
      // Switches on the orange light
      digitalWrite(orangeLight, HIGH);
      // Wait 500 milliseconds
      delay (500);
      // Switches off the orange light
      digitalWrite(orangeLight, LOW);
      // Wait 500 milliseconds
      delay (500);
    }
  }
  
  // Switches the yellow light off
  digitalWrite(yellowLight, LOW);   
  
  // Records the time since last change of lights
  changeTime = millis();
}
