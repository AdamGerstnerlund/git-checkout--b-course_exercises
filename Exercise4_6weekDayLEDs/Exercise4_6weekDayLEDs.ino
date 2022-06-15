// Exercise 6 from Chapter 4 of Beginning C for Arduino, 2nd ed.

#define SUNPIN 4
#define MONPIN 5
#define TUEPIN 6
#define WEDPIN 7
#define THUPIN 8
#define FRIPIN 9
#define SATPIN 10

void setup()
{
  pinMode(SUNPIN, OUTPUT);
  pinMode(MONPIN, OUTPUT);
  pinMode(TUEPIN, OUTPUT);
  pinMode(WEDPIN, OUTPUT);
  pinMode(THUPIN, OUTPUT);
  pinMode(FRIPIN, OUTPUT);
  pinMode(SATPIN, OUTPUT);
  
  Serial.begin(115200);
  Serial.println("Press a number for which weekday it is.\n1 is Sunday, 7 is Saturday.");
}

char digit;

void loop()
{
  delay(500);
  
  digitalWrite(SUNPIN, LOW);
  digitalWrite(MONPIN, LOW);
  digitalWrite(TUEPIN, LOW);
  digitalWrite(WEDPIN, LOW);
  digitalWrite(THUPIN, LOW);
  digitalWrite(FRIPIN, LOW);
  digitalWrite(SATPIN, LOW);
  
  if (Serial.available() > 0)
  {
    digit = Serial.read();
    switch (digit)
    {
      case '1':
        digitalWrite(SUNPIN, HIGH);
        break;
      case '2':
        digitalWrite(MONPIN, HIGH);
        break;
      case '3':
        digitalWrite(TUEPIN, HIGH);
        break;
      case '4':
        digitalWrite(WEDPIN, HIGH);
        break;
      case '5':
        digitalWrite(THUPIN, HIGH);
        break;
      case '6':
        digitalWrite(FRIPIN, HIGH);
        break;
      case '7':
        digitalWrite(SATPIN, HIGH);
        break;
      default:
        Serial.println("Come again...");
        break;
    }
  }
}
