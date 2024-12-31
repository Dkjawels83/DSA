#include <iostream>

int main() {
    // Input array
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Check if the array has at least 3 elements
    if (size < 3) {
        std::cout << "Array has fewer than 3 elements!" << std::endl;
    } else {
        // Calculate the sum of the first three elements
        int sum = arr[0] + arr[1] + arr[2];
        std::cout << "Sum of the first 3 elements: " << sum << std::endl;
    }

    return 0;
}

