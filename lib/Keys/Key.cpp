
//#include <iostream>
#include <D://pojects//arduino-Project//KeysFromBox//lib//Keys//Key.h>


     Key::Key()
     {

     }

     Key::Key(int _userId, int _roomNumber)
     {
         this->userId = _userId;
         this->roomNumber = _roomNumber;
     }

    void Key::SetIsPresent(bool _isPresent)
     {
         this->isPresent = _isPresent;
     }

     int Key::GetIsPresent()
     {
         return this->isPresent;
     }

     void Key::SetUserId(int _userId)
     {
         this->userId = _userId;
     }

     int Key::GetUserId()
     {
         return this->userId;
     }

     void Key::SetRoomNumber(int _roomNumber)
     {
         this->roomNumber = _roomNumber;
     }

     int Key::GetRoomNumber()
     {
         return this->roomNumber;
     }

     Key::~Key()
     {
         
     }

