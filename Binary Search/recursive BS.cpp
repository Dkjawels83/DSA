#include <iostream>
using namespace std;

// Recursive binary search function
int binarySearchRecursive(int arr[], int st, int end, int tar) {
    if (st > end) {
        return -1; // Base case: target not found
    }

    int mid = st + (end - st) / 2; // Avoid overflow

    if (arr[mid] == tar) {
        return mid; // Target found
    } else if (tar < arr[mid]) {
        return binarySearchRecursive(arr, st, mid - 1, tar); // Search left half
    } else {
        return binarySearchRecursive(arr, mid + 1, end, tar); // Search right half
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array in sorted order: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    int result = binarySearchRecursive(arr, 0, size - 1, target);

    if (result != -1) {
        cout << "Target is found at index " << result << endl;
    } else {
        cout << "Target is not found in the array" << endl;
    }

    return 0;
}

