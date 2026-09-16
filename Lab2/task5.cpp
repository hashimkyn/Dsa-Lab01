#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students (1-10): ";
    cin >> n;
    while (n < 1 || n > 10) {
        cout << "Invalid. Enter n between 1 and 10: ";
        cin >> n;
    }
    int* marks = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter Marks of Student " << i + 1 << ": ";
        cin >> *(marks + i);
    }
    int* newMarks = new int[n + 1];
    for (int i = 0; i < n; i++) {
        *(newMarks + i) = *(marks + i);
    }
    cout << "Enter New Student's Marks: ";
    cin >> *(newMarks + n);
    delete[] marks;
    marks = newMarks;
    n++;
    cout << "\nMarks: ";
    for (int i = 0; i < n; i++) {
        cout << *(marks + i) << " ";
    }

    delete[] marks;
    marks = nullptr;

    return 0;
}

