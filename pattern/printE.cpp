#include <iostream>
using namespace std;

int main() {
    int height = 7; // Height of the pattern

    // Loop through each row
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < height; j++) {
            // Print '*' for the vertical bar and the three horizontal bars
            if (j == 0 || i == 0 || i == height / 2 || i == height - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Move to the next line
    }

    return 0;
}

