
 class Key 
 {
     private:
      int userId;
      int roomNumber;
      bool isPresent;

     public:
        Key();

        Key(int _userId, int _roomNumber);

        void SetIsPresent(bool);
   
        bool GetIsPresent();

        void SetUserId(int _userId);
   
        int GetUserId();

        void SetRoomNumber(int _roomNumber);

        int GetRoomNumber();

        ~Key();
 };