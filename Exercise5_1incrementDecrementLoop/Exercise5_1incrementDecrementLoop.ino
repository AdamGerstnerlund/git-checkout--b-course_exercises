// Loop that keeps its control variable steady for no reason. And shows it.

void setup()
{
  Serial.begin(9600);
  for (int k = 0; k < 1000; k++)
  {
    k = DoSomethingCool(k);
    Serial.print("k is ");
    Serial.println(k);
  }
}

void loop()
{}

int DoSomethingCool(int num)
{
  return --num;
}
