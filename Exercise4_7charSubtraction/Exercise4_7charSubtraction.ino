// Exercise 7 from Chapter 4, Beginning C for Arduino, 2nd ed.

char c;
int num;

void setup()
{
  Serial.begin(115200);
}

void loop()
{
  if (Serial.available() > 0)
  {
    c = Serial.read();
    num = (int) (c - '0');
    Serial.println(num); // Below: improved to accept more characters
    /*
    switch (c)
    {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        Serial.print("The value is ");
        Serial.println(num);
        break;
      default:
        Serial.println("You need to type in a digit character.");
        break;
    }
    */
  }
}
