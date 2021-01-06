#include <iostream>

class Person {
public:
	void Save() {
		std::cout << "Person saved" << std::endl;
	}
};

class Employee : public Person {
public:
	void Save() {
		std::cout << "Employee saved" << std::endl;
	}
};

class Cashiers :public Employee {
public:
	void Save() {
		std::cout << "Cashier operations saved" << std::endl;
	}
};

int main()
{
	Person person;
	Employee employee;
	Cashiers cashiers;

	person.Save();
	employee.Save();
	cashiers.Save();

	std::cin.get();
}