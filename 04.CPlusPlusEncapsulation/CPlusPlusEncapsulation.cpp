#include <iostream>
#include <string>
using namespace std;

class Person {

	// define fields accesable only within the class
private:
	int ID;
	string Name;
	string LastName;

	// define properties
public:
	void setID(int id) {
		this->ID = id;
	}

	int getID() {
		return this->ID;
	}

	void setName(string name) {
		this->Name = name;
	}

	string getName() {
		return this->Name;
	}

	void setLastName(string lastName) {
		this->LastName = lastName;
	}

	string getLastName() {
		return this->LastName;
	}
};

int main()
{
	Person person;
	person.setID(1);
	person.setName("John");
	person.setLastName("Doe");

	cout << "ID " << person.getID() << " Name "
		<< person.getName() << " Last Name " << person.getLastName() << endl;

	cout << "Person information read!" << endl;
}