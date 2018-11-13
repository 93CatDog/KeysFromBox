
//#include <iostream>
#include <D://pojects//arduino-Project//KeysFromBox//lib//Keys//Key.h>


     Key::Key()
     {

     }

     Key::Key(int _userId, int _roomNumber, int _accessLevel)
     {
         this->userId = _userId;
         this->roomNumber = _roomNumber;
         this->accessLevel =  _accessLevel;
     }

    void Key::SetIsPresent(bool _isPresent)
     {
         this->isPresent = _isPresent;
     }

     bool Key::GetIsPresent()
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

    void Key::SetAccessLevel(int _accessLevel)
    {
        this->accessLevel = _accessLevel;
    }

    int Key::GetAccessLevel()
    {
        return this->accessLevel;        
    }

     Key::~Key()
     {
         
     }

