#include <iostream>
using namespace std;

class Student {
protected:
    int studentID;
    string name;

public:
    // Constructor
    Student(int id, string n) {
        studentID = id;
        name = n;
    }

    // Virtual function
    virtual void displayInfo() {
        cout << "Student ID: " << studentID << endl;
        cout << "Name: " << name << endl;
    }
};
