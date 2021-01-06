#include <iostream>

using namespace std;

class Person {
public:
	int ID;
	string Name;
	string LastName;
};

int main()
{
	Person person;
	person.ID = 1;
	person.Name = "John";
	person.LastName = "Doe";

	cin.get();
}