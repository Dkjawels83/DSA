#include <iostream>
using namespace std;

void reverseArrayRecursive(int arr[], int start, int end) {
    if (start >= end)
        return;

    // Swap elements
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursive call
    reverseArrayRecursive(arr, start + 1, end - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    reverseArrayRecursive(arr, 0, n - 1);

    cout << "\nReversed Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}

