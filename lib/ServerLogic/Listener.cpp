#include <string>

class Listener
{
    private:
    string request;
    
     public:
        Listener();

        Listener(string _request);

        void SetRequest(string _request);

        string GetRequest();

        ~Listener();
};

     Listener::Listener()
     {

     }

     Listener::Listener(string _request)
     {
         this->request = _request;
     }

     void Listener::SetRequest(string _request)
     {
         this->request = _request;
     }

     string Listener::GetRequest()
     {
         return this->request;
     }

     Listener::~Listener()
     {
         delete(this->request);
     }
