/*A university information system stores common details such as name, age, and
contact information for all individuals, while student-specific information such
as roll number and branch is maintained separately. Design an application that
avoids duplication of common data by organizing the classes appropriately.*/

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
};
class Student : public Person {
private:
  int rollNumber;
  string branch;

public:
  Student(string n, int a, string c, int r, string b) : Person(n, a, c) {
    rollNumber = r;
    branch = b;
  }
  void display() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Contact: " << contact << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Branch: " << branch << endl;
  }
};
int main() {
  Student s1("jeevan", 20, "9022263362", 101, "AI");
  s1.display();
  return 0;
}

// OUTPUT
/*Name: Jeevan
Age: 20
Contact: 9022263362
Roll Number: 101
Branch: AI*/