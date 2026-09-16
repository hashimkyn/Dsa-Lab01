#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of students: ";
    cin >> rows;

    while (rows <= 0) {
        cout << "Invalid. Enter a positive number: ";
        cin >> rows;
    }
    cout << "Enter number of subjects: ";
    cin >> cols;

    while (cols <= 0) {
        cout << "Invalid. Enter a positive number: ";
        cin >> cols;
    }
    int** marks = new int* [rows];

    for (int i = 0; i < rows; i++) {
        *(marks + i) = new int[cols];
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter marks for Student " << i + 1
                << ", Subject " << j + 1 << ": ";
            cin >> *(*(marks + i) + j);
        }
    }
    cout << "\nMarks Matrix:\n";

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << *(*(marks + r) + c) << "\t";
        }
        cout << endl;
    }
    int highestTotal = -1;
    int highestStudent = 1;

    for (int r = 0; r < rows; r++) {
        int total = 0;

        for (int c = 0; c < cols; c++) {
            total += *(*(marks + r) + c);
        }

        cout << "Student " << r + 1 << " Total: " << total << endl;

        if (total > highestTotal) {
            highestTotal = total;
            highestStudent = r + 1;
        }
    }

    cout << "\nStudent with highest total: Student "
        << highestStudent << endl;
    cout << "Highest total: " << highestTotal << endl;

    for (int r = 0; r < rows; r++) {
        delete[] * (marks + r);
    }

    delete[] marks;
    marks = nullptr;

    return 0;
}

