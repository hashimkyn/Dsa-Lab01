#include<iostream>
using namespace std;

int main() {
    int numbers[6];
    int temp;
    cout << "Enter 6 numbers: ";
    for (int i = 0; i < 6; i++) {
        cin >> numbers[i];
    }
    cout << "Array before Reversal: " << endl;

    for (int i = 0; i < 6; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    cout << "Array after Reversal: " << endl;
    for (int i = 0; i < 3; i++) {
        temp = numbers[i];
        numbers[i] = numbers[5 - i];
        numbers[5 - i] = temp;
    }
    for (int i = 0; i < 6; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

}



