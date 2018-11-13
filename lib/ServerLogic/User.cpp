#include <User.h>

/*
int User::CountOfUsers = 0;

void User::Add_User(User** arrayPointers, User* pointer)
{
    if (pointer != NULL && arrayPointers != NULL)
    {
	User **tmp = new User*[CountOfUsers + 1];
	for (int counter = 0; counter < CountOfUsers; counter++)
		*(tmp + counter) = *(arrayPointers + counter);
	*(tmp + CountOfUsers) = pointer;
	if (arrayPointers)
	{
		delete arrayPointers;
	}
	arrayPointers = tmp;
	CountOfUsers++;
}
*/
        User::User() { }

        User::User(String _name, String _surname, String _patronymic, String _userName, int _accessLevel)
        {
            this->name = _name;
            this->surname = _surname;
            this->patronymic = _patronymic;
            this->userName = _userName;
            this->accessLevel = _accessLevel;
        }

        void User::SetName(String _name)
        {
            this->name = _name;
        }
   
        String User::GetName()
        {
            return this->name;
        }

        void User::SetSurname(String _surname)
        {
            this->surname = _surname;
        }
   
        String User::GetSurname()
        {
            return this->surname;
        }

        void User::SetPatronymic(String _patronymic)
        {
            this->patronymic = _patronymic;
        }
   
        String User::GetPatronymic()
        {
            return this->patronymic;
        }

        void User::SetUserName(String _userName)
        {
             this->userName = _userName;
        }
   
        String User::GetUserName()
        {
            return this->userName;
        }

        void User::SetAccessLevel(int _accessLevel)
        {
            this->accessLevel = _accessLevel;
        }

        int User::GetAccessLevel()
        {
            return this->accessLevel;
        }

        User::~User()
        {

        }