#include <iostream>
using namespace std;

int main() {
    int numbers[] = { 2, 4, 6, 8, 10 };

    //Changing the third element
    numbers[2] = 7;

    //Using for loop for displaying the numbers of array
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;
    return 0;
}