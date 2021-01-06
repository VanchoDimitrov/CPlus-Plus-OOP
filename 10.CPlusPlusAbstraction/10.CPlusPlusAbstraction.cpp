#include <iostream>
using namespace std;

// Abstraction is a process of hiding someting within the class
class Person
{
private:
	string name, LastName;

public:
	void Assign(string name, string lastName)
	{
		this->name = name;
		this->LastName = lastName;
	}

	void PrintResult()
	{
		cout << "Name = " << this->name << endl;
		cout << "Last Name = " << this->LastName << endl;
	}
};

int main()
{
	Person person;
	person.Assign("John", "Doe");
	person.PrintResult();

	cin.get();
}