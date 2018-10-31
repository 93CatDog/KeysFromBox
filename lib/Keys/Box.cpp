
#include <D://pojects//arduino-Project//KeysFromBox//lib//Keys//Box.h>
#include <D://pojects//arduino-Project//KeysFromBox//lib//Keys//Key.h>

     Box::Box()
     {

     }

     Box::Box(Key* _keys)
     {
         this->keys = _keys;
     }

     Key Box::GetKeyById(int id)
     {
         return this->keys[id];
     }

     void Box::SetKeys(Key* _keys)
     {
         this->keys = _keys;
     }

     Key* Box::GetKeys()
     {
         return this->keys;
     }

     Box::~Box()
     {
         delete(this->keys);
     }