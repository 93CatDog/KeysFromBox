class Key;

 class Box
 {
     private:
      Key* keys;

     public:
      Box();

      Box(Key*);

      Key GetKeyById(int);

      void SetKeys(Key*);

      Key* GetKeys();

      ~Box();
 };