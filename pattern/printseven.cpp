#include <iostream>
using namespace std;

int main() {
    int height = 7; // Height of the pattern
    
    // Loop through each row
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height; j++) {
            // Print '*' for the top row or the diagonal of the 7
            if (i == 0 || j == height - i - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line
    }

    return 0;
}

