#include <iostream>
using namespace std;

class Person {
public:
	string Name;
	string LastName;

	Person()
	{

	}
	Person(string name, string lastName)
	{
		this->Name = name;
		this->LastName = lastName;
	}

	virtual ~Person() {
		cout << "Destructing constructor" << endl;
	}
};

int main()
{
	Person person;

	// We can directly pass values to the fields
	person.Name = "John";
	person.LastName = "Doe";

	cout << person.Name + " " + person.LastName << endl;

	Person person1("John", "Doe");
	// or we can pass the information to the constructor which executes when the class is called.

	cout << person1.Name + " " + person1.LastName << endl;

	cin.get();
}