
 class Key 
 {
     private:
      int userId;
      int roomNumber;
      int accessLevel;
      bool isPresent;
      
     public:
        Key();

        Key(int _userId, int _roomNumber, int _accessLevel);

        void SetIsPresent(bool);
   
        bool GetIsPresent();

        void SetUserId(int _userId);
   
        int GetUserId();

        void SetRoomNumber(int _roomNumber);

        int GetRoomNumber();

        void SetAccessLevel(int _accessLevel);

        int GetAccessLevel();

        ~Key();
 };