
#include <Arduino.h>

class Listener
{
    private:
    String request;
    
     public:
        Listener();

        Listener(String _request);

        void SetRequest(String _request);

        String GetRequest();

        ~Listener();
};

     Listener::Listener()
     {

     }

     Listener::Listener(String _request)
     {
         this->request = _request;
     }

     void Listener::SetRequest(String _request)
     {
         this->request = _request;
     }

     String Listener::GetRequest()
     {
         return this->request;
     }

     Listener::~Listener()
     {
         /*hihihi*/
     }
