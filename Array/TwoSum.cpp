#include <iostream>
using namespace std;

bool findPairWithSum(int arr[], int n, int target, int& num1, int& num2) {
    // Check all pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                num1 = arr[i];
                num2 = arr[j];
                return true; // Pair found
            }
        }
    }
    return false; // No pair found
}

int main() {
    int arr[] = {2, 7, 11, 15}; // Example array
    int target = 9;             // Target sum
    int n = sizeof(arr) / sizeof(arr[0]); // Size of the array

    int num1, num2; // Variables to store the pair

    if (findPairWithSum(arr, n, target, num1, num2)) {
        cout << "Pair found: " << num1 << " and " << num2 << endl;
    } else {
        cout << "No pair with the target sum found." << endl;
    }

    return 0;
}

