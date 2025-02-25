#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    // Traverse the binary string from right to left
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);  // Add 2^power to the result
        }
        power++;
    }
    return decimal;
}

// Function to convert decimal to binary
string decimalToBinary(int decimal) {
    if (decimal == 0) return "0";  // Special case for zero
    string binary = "";
    while (decimal > 0) {
        binary = (decimal % 2 == 0 ? "0" : "1") + binary;  // Append 0 or 1 to the binary string
        decimal /= 2;  // Divide decimal by 2
    }
    return binary;
}

int main() {
    int choice;
    cout << "Select Conversion Type:\n";
    cout << "1. Binary to Decimal\n";
    cout << "2. Decimal to Binary\n";
    cout << "Enter choice (1 or 2): ";
    cin >> choice;

    if (choice == 1) {
        string binary;
        cout << "Enter a binary number: ";
        cin >> binary;
        cout << "Decimal equivalent: " << binaryToDecimal(binary) << endl;
    } else if (choice == 2) {
        int decimal;
        cout << "Enter a decimal number: ";
        cin >> decimal;
        cout << "Binary equivalent: " << decimalToBinary(decimal) << endl;
    } else {
        cout << "Invalid choice! Please choose 1 or 2.\n";
    }

    return 0;
}
