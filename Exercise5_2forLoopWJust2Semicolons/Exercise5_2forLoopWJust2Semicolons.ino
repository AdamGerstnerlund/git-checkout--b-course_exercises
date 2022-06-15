// for-loop with just two semicolons

#define EVER ;; // Just two semicolons...

// Some statements

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(EVER)
  {
    // Do some statements here
    Serial.println("Pass... ");
  }
  // The rest of the program
}
