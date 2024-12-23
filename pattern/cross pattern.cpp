#include <iostream>
using namespace std;

int main() {
    int n;

    // Ask user for the size of the cross (must be odd)
    cout << "Enter an odd number for the size of the cross pattern: ";
    cin >> n;

    // Check if the input is valid
    if (n % 2 == 0) {
        cout << "Please enter an odd number!" << endl;
        return 1;
    }

    // Generate the cross pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' when row and column are the same or when they sum to n-1
            if (i == j || i + j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line
    }

    return 0;
}

