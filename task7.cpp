#include <iostream>
using namespace std;

int main() {
    int numbers[10];
    int count = 0;

    cout << "Enter 10 Numbers: ";
    for (int i = 0; i < 10; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < 10; i++) {
        bool duplicate = false;

        for (int j = 0; j < i; j++) {
            if (numbers[j] == numbers[i]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            int value = numbers[i];

            for (int j = i; j > count; j--) {
                numbers[j] = numbers[j - 1];
            }

            numbers[count] = value;
            count++;
        }
    }

    cout << "Unique values: ";
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << "Count: " << count << endl;
    return 0;
}

