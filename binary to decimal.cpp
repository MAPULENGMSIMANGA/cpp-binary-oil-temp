#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Function to convert decimal to binary
string decimalToBinary(int decimal) {
    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary.empty() ? "0" : binary; // return "0" if input is 0
}

// Function to convert binary to decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int base = 1; // 2^0 = 1
    int length = binary.length();

    // Convert binary to decimal
    for (int i = length - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += base;
        }
        base *= 2;
    }
    return decimal;
}

int main() {
    int choice;
    cout << "Select conversion type: \n";
    cout << "1. Decimal to Binary\n";
    cout << "2. Binary to Decimal\n";
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        int decimal;
        cout << "Enter a decimal number: ";
        cin >> decimal;
        cout << "Binary equivalent: " << decimalToBinary(decimal) << endl;
    } else if (choice == 2) {
        string binary;
        cout << "Enter a binary number: ";
        cin >> binary;
        cout << "Decimal equivalent: " << binaryToDecimal(binary) << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
