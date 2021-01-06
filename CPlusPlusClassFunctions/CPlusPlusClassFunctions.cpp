#include <iostream>
using namespace std;

class Person {
public: // access modifiers could be also private (no access outside the class), protected (access in inherited classes)
	int ID;
	string Name;
	string LastName;

	// This method/function with parameters is contained within the the class itself
	void SaveInformation(int ID, string Name, string LastName) {
		this->ID = ID;
		this->Name = Name;
		this->LastName = LastName;

		cout << "ID " << this->ID << " Name "
			<< this->Name << " Last Name " << this->LastName << endl;

		cout << "Person information saved!" << endl;
	}
};

class Employee {
public:
	int ID;
	string Name;
	string LastName;
	void SaveInformation(int ID, string Name, string LastName);
};

// outside the class. No such equivalent in c#
void Employee::SaveInformation(int ID, string Name, string LastName) {
	this->ID = ID;
	this->Name = Name;
	this->LastName = LastName;

	cout << "ID " << this->ID << " Name "
		<< this->Name << " Last Name " << this->LastName << endl;

	cout << "Employee information saved!" << endl;
}

int main()
{
	Person person;
	person.SaveInformation(1, "John", "Doe");

	cout << endl;

	Employee employee;
	employee.SaveInformation(1, "John", "Doe");

	std::cin.get();
}