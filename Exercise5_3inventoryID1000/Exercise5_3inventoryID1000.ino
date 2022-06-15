// Code fragment: 
// From an inventory of 500 000 items, find part with numeric ID 1000.

#define INVENTORY 500000
#define ID 1000

long partID = ID;
long inventorySlot = 1;

while (inventorySlot <= INVENTORY)
{
  if (item == partID)
  {
    break;
  }
  inventorySlot++;
}
Serial.print("Part number ");
Serial.print(partID);
Serial.print(" found at inventory slot ");
Serial.println(inventorySlot);

/*
#define INVENTORY 500 // decreased due to various limitations
#define ID 143 // arbitrary search item

word partID = ID;
word invArray[INVENTORY];
word invSlot;

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(A0));
  for (invSlot = 0; invSlot < sizeof(invArray)/sizeof(invArray[0]); invSlot++)
  {
    invArray[invSlot] = random(1, INVENTORY + 1);
  }
  //for (invSlot = 0; invSlot < sizeof(invArray)/sizeof(invArray[0]); invSlot++)
  //{
  //  Serial.print(invSlot);Serial.print(" : ");Serial.println(invArray[invSlot]);
  //}
  invSlot = 0;
  while (invSlot < sizeof(invArray)/sizeof(invArray[0]))
  {
    if (invArray[invSlot] == partID)
    {
      break;
    }
    invSlot++;
  }
  Serial.print("Part number ");
  Serial.print(partID);
  Serial.print(" found at inventory slot ");
  Serial.println(invSlot);
}

void loop()
{}
*/
