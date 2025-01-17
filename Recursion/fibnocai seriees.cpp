#include <iostream>
using namespace std;

// Function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n; // Base case: return n if it's 0 or 1
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        cout << "Fibonacci Series: ";
        for (int i = 0; i < n; ++i) {
            cout << fibonacci(i);
            if (i < n - 1) cout << ", "; // Add commas between terms
        }
        cout << endl;
    }

    return 0;
}

