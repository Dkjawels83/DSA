#include <iostream>
#include <cmath> // For sqrt() function
using namespace std;

int main() {
    int radius;

    cout << "Enter the radius of the half-circle: ";
    cin >> radius;

    for (int i = 0; i <= radius; i++) {
        for (int j = 0; j <= radius; j++) {
            // Equation of a circle: x^2 + y^2 = r^2
            if (sqrt(i * i + j * j) <= radius) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}

