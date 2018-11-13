#include <Arduino.h>

 class User 
 {
     private:
      String name;
      String surname;
      String patronymic;
      String userName;
      int accessLevel;
      
     public:
        User();

        User(String _name, String _surname, String _patronymic, String _userName, int _accessLevel);

        void SetName(String _name);
   
        String GetName();

         void SetSurname(String _surname);
   
        String GetSurname();

         void SetPatronymic(String _patronymic);
   
        String GetPatronymic();

         void SetUserName(String _userName);
   
        String GetUserName();

        void SetAccessLevel(int _accessLevel);

        int GetAccessLevel();

        ~User();
 };