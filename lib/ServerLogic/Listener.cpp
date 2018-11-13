#include <Arduino.h>
#include <Listener.h>

     Listener::Listener()
     {

     }

     Listener::Listener(int _number)
     {
         SetRequest(_number);
     }

     /*Listener::Listener(String _request)
     {
         SetRequest(_request);
     }*/

     void Listener::SetRequest(int _number) 
     {
         if (_number > 0)
         {
            this->numberOfKey = _number;        
         }
     }
/*
     void Listener::SetAccess(int _number) //количество уровней доступа = 3
     {
         if (_number > 0 && _number < 4)
         {
            this->numberOfAccessLevel = _number;        
         }
     }
*/

    /* void Listener::SetRequest(String _request)
     {
         if (_request != NULL)
         {
            _request.trim();
            this->numberOfKey = _request.toInt();
         
         }
     }
    */

     int Listener::GetIndexOfKey()
     {
         return this->numberOfKey - 1;
     }

     Listener::~Listener()
     {
         /*hihihi*/
     }
