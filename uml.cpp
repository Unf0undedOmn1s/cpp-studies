/*
+-------------------+
|      Person       |
+-------------------+
| - name : string   |
| - age : int       |
+-------------------+
| + getName() : string |
| + getAge() : int    |
| + setName(string)   |
| + setAge(int)       |
+-------------------+

            ▲
            |
            |
+-------------------+
|     Student       |
+-------------------+
| - studentId : int |
+-------------------+
| + getId() : int   |
| + setId(int)      |
+-------------------+
*/
#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
private:
    string name;
    int age;

public:
    // Constructors
    Person() : name(""), age(0) {}
    Person(string n, int a) : name(n), age(a) {}

    // Getters
    string getName() const { return name; }
    int getAge() const { return age; }

    // Setters
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }

    // Print info
    void printInfo() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    int studentId;

public:
    // Constructors
    Student() : Person(), studentId(0) {}
    Student(string n, int a, int id) : Person(n, a), studentId(id) {}

    // Getters
    int getId() const { return studentId; }

    // Setters
    void setId(int id) { studentId = id; }

    // Print info
    void printStudentInfo() const {
        printInfo();
        cout << "Student ID: " << studentId << endl;
    }
};

// Main
int main() {
    Student s("Maria", 21, 12345);
    s.printStudentInfo();

    return 0;
}
