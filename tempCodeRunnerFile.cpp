#include <iostream>
using namespace std;
//9908061136086

int main() {
    int temp1;
    int temp2;
    int temp3;

    // Prompting user for temperature readings
    cout << "\nEnter temperature reading 1: ";//format output for user ease
    cin >> temp1;

    cout << "Enter temperature reading 2: ";
    cin >> temp2;

    cout << "Enter temperature reading 3: ";
    cin >> temp3;

    // Checking the difference between temperature readings
    if (temp2 - temp1 > 50) {
        cout << "Reduce fryer heat before taking the third reading." << endl;
    } else if (temp2 - temp1 < 10) {
        cout << "Increase the fryer heat before taking the third reading." << endl
    }

    // Checking the third reading temperature range
    if (temp3 > 150 && temp3 < 190) {
        cout << "You may start frying magwinya." << endl
    } else {
        cout << "Oil is not hot enough for frying." << endl;
    }

    return 0;
}

