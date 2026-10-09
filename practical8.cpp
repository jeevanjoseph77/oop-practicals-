/*An organization maintains records of its workforce. Every manager is an
employee, and every employee is a person. Design an application that
progressively extends the available information at each level while reusing the
common details already defined.*/

#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
  string name;
  int age;
  string contact;

public:
  Person(string n, int a, string c) {
    name = n;
    age = a;
    contact = c;
  }
  void displayPerson() const {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Contact: " << contact << endl;
  }
};
class Employee : public Person {
protected:
  int employeeID;
  string department;

public:
  Employee(string n, int a, string c, int id, string dept) : Person(n, a, c) {
    employeeID = id;
    department = dept;
  }
  void displayEmployee() const {
    displayPerson();
    cout << "Employee ID: " << employeeID << endl;
    cout << "Department: " << department << endl;
  }
};
class Manager : public Employee {
private:
  int teamSize;

public:
  Manager(string n, int a, string c, int id, string dept, int size)
      : Employee(n, a, c, id, dept) {
    teamSize = size;
  }
  void displayManager() const {
    displayEmployee();
    cout << "Team Size: " << teamSize << endl;
  }
};
int main() {
  Manager manager("jeevan", 40, "9022263362", 101, "AI", 8);
  cout << "--- Manager Details ---" << endl;
  manager.displayManager();
  return 0;
}

// OUTPUT

/*--- Manager Details ---
Name: Jeevan
Age: 40
Contact: 9022263362
Employee ID: 101
Department: AI
Team Size: 8 */