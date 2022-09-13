#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	int ID;
	string Name;
	string LastName;

public:
	void Save(int id, string name, string lastName) {
		this->ID = id;
		this->Name = name;
		this->LastName = lastName;

		cout << "Person info saved within database." << endl;
		cout << Name + " " + " " + LastName << endl;
	}
};

int main()
{
	Person person;
	person.Save(1, "John", "Doe");

	cin.get();
}