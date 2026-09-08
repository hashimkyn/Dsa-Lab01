#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int total = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter integer " << i + 1 << " :";
        cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++) {
        total = total + numbers[i];
        cout << i << " ";
        cout << "numbers[i]: " << numbers[i] << " ";
        cout << "Total: " << total << endl;
    }

    cout << "The total of all numbers is " << total << endl;

    return 0;
}


