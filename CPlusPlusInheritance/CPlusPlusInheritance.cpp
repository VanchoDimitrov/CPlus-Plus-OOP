#include <iostream>
using namespace std;

class Person {
public:
	int ID;
	string Name;
	string LastName;
};

class Employee :public Person {
public:
	string TypeEmployee;

	void PrintEmployee(int id, string name, string lastName,
		string typeEmployee) {

		this->ID = id;
		this->Name = name;
		this->LastName = lastName;
		this->TypeEmployee = typeEmployee;

		cout << " ID " << this->ID << " Name " << this->Name << " Last Name "
			<< this->LastName << " Type of Employee "
			<< this->TypeEmployee << endl;
	}
};

int main()
{
	Employee employee;
	employee.PrintEmployee(1, "John", "Doe", "CEO");

	cin.get();
}