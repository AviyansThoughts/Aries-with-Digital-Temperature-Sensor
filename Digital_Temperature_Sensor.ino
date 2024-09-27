// Welcome to Aviyan's Thoughts

int led = 23; // define the LED pin on GPIO 23
int digitalPin = 2; // KY-028 digital interface on GPIO 2
int analogPin = A0; // KY-028 analog interface on A0
int digitalVal; // digital readings
int analogVal; //analog readings

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(digitalPin, INPUT);
  //pinMode(analogPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  // Read the digital interface
  digitalVal = digitalRead(digitalPin); 
  if(digitalVal == HIGH) // if temperature threshold reached
  {
    Serial.println("Temperature Detected");
  }
  else
  {
    Serial.println("Temperature not Detected");
  }

  // Read the analog interface
  analogVal = analogRead(analogPin); 
  Serial.println(analogVal); // print analog value to serial

  delay(1000);
}