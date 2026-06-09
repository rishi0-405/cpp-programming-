#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name;
    int rollNumber;
    double marks;
    void printDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};
int main() {
    Student student1;
    student1.name = "Rahul";
    student1.rollNumber = 101;
    student1.marks = 85.5;
    cout << "--- Student Details ---" << endl;
    student1.printDetails();
    return 0;
}
