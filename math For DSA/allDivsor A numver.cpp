#include <iostream>
using namespace std;

void findDivisors(int n) {
    cout << "The divisors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number <= 0) {
        cout << "Please enter a positive integer!" << endl;
    } else {
        findDivisors(number);
    }

    return 0;
}

