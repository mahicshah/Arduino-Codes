int buttonstateold = 0;
int buttonstatenew = 0;
int ledPin = 11;
int buttonPin = 2;
int brightness = 0;
int increasedbrightness = 51;
int maxbrightness = 255;

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(buttonPin, INPUT);
}

void loop()
{
    int buttonstatenew = digitalRead(buttonPin);
    if (buttonstatenew != buttonstateold && buttonstatenew == LOW)
     {
        brightness += increasedbrightness;  
     }
    buttonstateold = buttonstatenew;
    
    if (brightness == maxbrightness)
     {
        brightness = 0; 
     }

delay(100);
analogWrite(ledPin, brightness);  
}
