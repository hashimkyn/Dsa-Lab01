#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    while (n <= 0) {
        cout << "Invalid! Number of Students should be positive." << endl;
        cout << "Enter the number of students: ";
        cin >> n;
    }
    int* marks = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the marks(0 - 100) for student " << i + 1 << ": ";
        cin >> *(marks + i);
    }
    int total = 0;
    int passed = 0;
    cout << "Marks: ";
    for (int i = 0; i < n; i++) {
        cout << *(marks + i) << " ";
        total = total + *(marks + i);

        if (*(marks + i) >= 50) {
            passed++;
        }
    }
    double average = (double)total / n;
    cout << "\nTotal: " << total << endl;
    cout << "Average: " << average << endl;;
    cout << "Number of marks greater than 50: " << passed << endl;

    delete[] marks;
    marks = nullptr;
    return 0;
}




