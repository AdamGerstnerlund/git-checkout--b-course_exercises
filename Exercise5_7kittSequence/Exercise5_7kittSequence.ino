// Cha. 5 Ex 7. Purdum
// Knight Rider "Kitt" light sequence

#define ArrayEntries(x) (sizeof(x)/sizeof(x[0]))
#define PAUSE 50

int k;
int LEDs[] = {4, 5, 6, 7, 8, 9, 10, 11, 12}; // LEDs wired to pins 4 through 12

void setup()
{
  for (k = 0; k < ArrayEntries(LEDs); k++)
  {
    pinMode(LEDs[k], OUTPUT); // Initialize LEDs for output
  }
}

void loop()
{
  for (k = 0; k < ArrayEntries(LEDs); k++)
  {
    blinkForward(LEDs[k]);
    if (k == (ArrayEntries(LEDs)-1))
      break;
    delay(PAUSE);
  }
  for (k = ArrayEntries(LEDs)-1; k >= 0; k--)
  {
    blinkBackward(LEDs[k]);
    if (k == 0)
      break;
    delay(PAUSE);
  }
}

void blinkForward(int entry)
{
  digitalWrite(entry, HIGH);
  digitalWrite(entry - 1, LOW);
}

void blinkBackward(int entry)
{
  digitalWrite(entry, HIGH);
  digitalWrite(entry + 1, LOW);
}
