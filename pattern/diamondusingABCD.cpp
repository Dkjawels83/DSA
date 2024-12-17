#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of rows for the diamond pattern: ";
    cin >> n;

    int space = n - 1; // Initial spaces

    // Upper half of the diamond
    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < space; j++) {
            cout << " ";
        }
        // Print alphabets
        char ch = 'A';
        for (int j = 0; j <= i; j++) {
            cout << ch++;
        }
        ch -= 2;
        for (int j = 0; j < i; j++) {
            cout << ch--;
        }

        cout << endl;
        space--; // Reduce spaces for next row
    }

    space = 1; // Reset space for the lower half

    // Lower half of the diamond
    for (int i = n - 2; i >= 0; i--) {
        // Print leading spaces
        for (int j = 0; j < space; j++) {
            cout << " ";
        }
        // Print alphabets
        char ch = 'A';
        for (int j = 0; j <= i; j++) {
            cout << ch++;
        }
        ch -= 2;
        for (int j = 0; j < i; j++) {
            cout << ch--;
        }

        cout << endl;
        space++; // Increase spaces for next row
    }

    return 0;
}

