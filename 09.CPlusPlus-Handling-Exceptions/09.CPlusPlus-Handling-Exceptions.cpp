#include <iostream>
using namespace std;

class Users {
public:
	string UserName;
	string Password;

	Users()
	{
		UserName = "John";
		Password = "Doe";
	}

};

void MainMenuForm() {
	cout << "Welcome to the application" << std::endl;
}

int main()
{
	Users users;

	try
	{
		if (users.UserName == "1John" && users.Password == "Doe")
		{
			MainMenuForm();
		}
		else
		{
			// Intentional exception
			throw "Error";
		}
	}
	catch (const exception& e)
	{
		cout << e.what() << endl;
	}
}