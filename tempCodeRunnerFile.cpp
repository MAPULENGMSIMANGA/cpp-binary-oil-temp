#include <iostream>
using namespace std;

int main() {
    int temp1;
    int temp2;
    int temp3;

    // Prompting user for temperature readings
    cout << "\nEnter temperature reading 1: ";
    cin >> temp1;

    cout << "Enter temperature reading 2: ";
    cin >> temp2;

    cout << "Enter temperature reading 3: ";
    cin >> temp3;

    // Checking the difference between temperature readings
    if (temp2 - temp1 > 50) {
        cout << "Reduce fryer heat before taking the third reading." << endl;
    } else if (temp2 - temp1 < 10) {
        cout << "Increase the fryer heat before taking the third reading." << endl;
    }

    
 

    return 0;
}
