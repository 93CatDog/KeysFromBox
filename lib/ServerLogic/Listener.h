class String;

class Listener
{
    private:
    int numberOfKey;
    
     public:
        Listener();

        Listener(int _number);
        
        Listener(String _request);

        void SetRequest(int _number);

        void SetRequest(String _request);

        int GetIndexOfKey();

        ~Listener();
};