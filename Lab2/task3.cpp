#include <iostream>
using namespace std;

int main() {
    int sales[2][3];
    int (*rowPtr)[3] = sales;

    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            cout << "Enter sales for Branch " << r + 1
                << ", Day " << c + 1 << ": ";
            cin >> *(*(rowPtr + r) + c);
        }
    }
    cout << "\nSales Table:\n";

    for (int r = 0; r < 2; r++) {
        for (int c = 0; c < 3; c++) {
            cout << *(*(rowPtr + r) + c) << "\t";
        }
        cout << endl;
    }
    for (int r = 0; r < 2; r++) {
        int branchTotal = 0;

        for (int c = 0; c < 3; c++) {
            branchTotal = branchTotal + *(*(rowPtr + r) + c);
        }

        cout << "Total for Branch " << r + 1 << ": "
            << branchTotal << endl;
    }
    for (int c = 0; c < 3; c++) {
        int dayTotal = 0;

        for (int r = 0; r < 2; r++) {
            dayTotal = dayTotal + *(*(rowPtr + r) + c);
        }

        cout << "Total for Day " << c + 1 << ": "
            << dayTotal << endl;
    }
    return 0;
}


