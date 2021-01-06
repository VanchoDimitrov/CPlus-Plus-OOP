#include <iostream>

class Person {
public:
	int ID;
	std::string Name;

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

int main()
{
	Cashiers cashiers;
	cashiers.PrintPerson();

	std::cin.get();
}