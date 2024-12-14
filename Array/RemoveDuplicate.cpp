#include <iostream>
using namespace std;

void findDuplicates(int arr[], int n) {
    bool foundDuplicate = false; // To check if there are any duplicates
    cout << "Duplicate elements are: ";
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                foundDuplicate = true;
                break; // Avoid counting the same element multiple times
            }
        }
    }

    if (!foundDuplicate) {
        cout << "No duplicates found";
    }
}

int main() {
    int array[] = {1, 2, 3, 4, 2, 5, 6, 3};
    int size = sizeof(array) / sizeof(array[0]);

    findDuplicates(array, size);
    return 0;
}

