#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	//Constructors
	Person() {
		cout << "Let the party begin." << endl;
	}

	Person(string Name, string LastName) {
		cout << Name + " " + LastName << endl;
	}

	// Destruct a Constructor
	~Person() {
		cout << "Destructing a constructor" << endl;
	};
};

int main()
{
	Person person;

	Person person1("John", "Doe");

	cin.get();
}