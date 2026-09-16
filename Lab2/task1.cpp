#include<iostream>
using namespace std;
int main() {
	int sales[5];
	int total = 0;
	int* p = sales;
	for (int i = 0; i < 5; i++) {
		cout << "Enter number " << i + 1 << ": ";
		cin >> *(p + i);
	}
	cout << "The numbers are: ";
	for (int i = 0; i < 5; i++) {
		cout << *(p + i) << " ";
		total = total + *(p + i);
	}
	cout << endl;
	cout << "The total of numbers is " << total << endl;
	*(p + 2) = *(p + 2) + 2;
	total = 0;
	cout << "The updated numbers are: ";
	for (int i = 0; i < 5; i++) {
		cout << *(p + i) << " ";
		total = total + *(p + i);
	}
	cout << "\nThe updated total of numbers is " << total << endl;
}


