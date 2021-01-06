#include <iostream>

class Person {
public:
	int ID;
	std::string Name;

public:
	Person()
	{
		this->ID = 1;
		this->Name = "John";
	}
};

class Employee : public Person {
public:
	void PrintPerson() {
		std::cout << ID << " " + Name << std::endl;
	}
};

class Cashiers :public Employee {
public:
	Cashiers()
	{
		Name = "Changed to Doe!";
	}
};

class People : public Person, public Employee, public Cashiers {

};

int main()
{
	People people;
	people.Cashiers::PrintPerson();
	people.Employee::PrintPerson();

	std::cin.get();
}