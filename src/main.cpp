#include <Arduino.h>
#include <D://pojects//arduino-Project//KeysFromBox//lib//Keys//Box.h>
#include <D://pojects//arduino-Project//KeysFromBox//lib//Keys//Key.h>
#include <D://pojects//arduino-Project//KeysFromBox//lib//ServerLogic//Listener.h>

  int countOfKeys = 5; //количество ключей
  Box* box = new Box(countOfKeys); //коробка
  Listener* listener = new Listener; //"сервер", принимает запрос в виде числа (номер от 1 до 5)

void setup() {
  // put your setup code here, to run once:
  
  //инициализация состояний ключей, свойств isPresent - есть/нету (true/false)
  for(int count = 0; count < countOfKeys; count++)
  {
    *(box->GetKeys() + count) = new Key;
    box->GetKeyById(count)->SetUserId(count + 1);
    box->GetKeyById(count)->SetIsPresent(true);
  }
  box->GetKeyById(1)->SetIsPresent(false);
  box->GetKeyById(4)->SetIsPresent(false);

  Serial.begin(9600);

  Serial.println("Starting . . .");
}

void loop() {
  // put your main code here, to run repeatedly:

//ввод номера ключа
if(Serial.available()) 
{
  Serial.println();
Serial.println("Waiting number  . . . ");
  char a = Serial.read();
   Serial.println("Your number  is ");
  Serial.write(a);
  Serial.println();

  switch(a)
  {
    case '1':
    listener->SetRequest(1);
    break;
     case '2':
    listener->SetRequest(2);
    break;
     case '3':
    listener->SetRequest(3);
    break;
     case '4':
    listener->SetRequest(4);
    break;
     case '5':
    listener->SetRequest(5);
    break;
  }
  Serial.print("state is : ");
  //вывод состояния ключа - есть/нету (1/0)
  if (box->GetKeyById(listener->GetIndexOfKey())->GetIsPresent())
    a = '1';
  else
    a = '0';

  Serial.write(a);
}

}