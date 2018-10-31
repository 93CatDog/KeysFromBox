#include <Arduino.h>
#include <D://pojects//arduino-Project//KeysFromBox//lib//Keys//Box.h>
#include <D://pojects//arduino-Project//KeysFromBox//lib//Keys//Key.h>

void setup() {
  // put your setup code here, to run once:

  Box box;
  int countOfKeys = 5;
  box.SetKeys(new Key [countOfKeys]);
  for(int count = 0; count < countOfKeys; count++)
  {
    box.GetKeyById(count).SetUserId(1000 + count);
    box.GetKeyById(count).SetIsPresent(true);
  }
  box.GetKeyById(1).SetIsPresent(false);
  box.GetKeyById(4).SetIsPresent(false);
}

void loop() {
  // put your main code here, to run repeatedly:
}