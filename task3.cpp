#include<iostream>
using namespace std;

class Student {
public:
    int rollNumber;
    int marks;
    void display() {
        cout << "Roll Number of the Student: " << rollNumber << endl;
        cout << "Marks of the Student: " << marks << endl;
    }
};

int main() {
    Student s1;
    Student s2;
    s1.rollNumber = 1;
    s2.rollNumber = 2;
    s1.marks = 75;
    s2.marks = 90;
    cout << "Student 1:" << endl;
    s1.display();
    cout << "Student 2:" << endl;
    s2.display();
    cout << "After changing marks of Student 1 only" << endl;
    s1.marks = 80;
    cout << "Student 1:" << endl;
    s1.display();
    cout << "Student 2:" << endl;
    s2.display();
}


