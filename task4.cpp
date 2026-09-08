#include <iostream>
using namespace std;

int main() {
    int numbers[8];
    cout << "Enter 8 numbers:";
    for (int i = 0; i < 8; i++) {
        cin >> numbers[i];
    }
    int max = numbers[0];
    int imax = 0;
    int min = numbers[0];
    int imin = 0;
    for (int i = 0; i < 8; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
            imax = i;
        }
        if (numbers[i] < min) {
            min = numbers[i];
            imin = i;
        }
    }
    cout << "The Largest Number is " << max << " " << " with index " << imax << endl;
    cout << "The Smallest Number is " << min << " " << " with index " << imin << endl;
}

