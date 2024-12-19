#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int radius = 10; // Radius of the circle
    int diameter = 2 * radius;

    for (int i = 0; i <= diameter; i++) {
        for (int j = 0; j <= diameter; j++) {
            // Calculate the distance from the center
            double distance = sqrt(pow(i - radius, 2) + pow(j - radius, 2));

            // If distance is approximately equal to the radius, print '*'
            if (distance >= radius - 0.5 && distance <= radius + 0.5) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

