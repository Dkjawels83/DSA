#include <iostream>
using namespace std;

void intersectArrays(int arr1[], int n1, int arr2[], int n2) {
    int intersection[100]; // Array to store intersection results (assuming max size is 100)
    int k = 0; // Index for intersection array

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                // Check if already in the intersection array to avoid duplicates
                bool alreadyExists = false;
                for (int x = 0; x < k; x++) {
                    if (intersection[x] == arr1[i]) {
                        alreadyExists = true;
                        break;
                    }
                }

                if (!alreadyExists) {
                    intersection[k++] = arr1[i];
                }
                break; // No need to check further once match is found
            }
        }
    }

    // Print the intersection
    cout << "Intersection: ";
    for (int i = 0; i < k; i++) {
        cout << intersection[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 2, 3, 4};
    int arr2[] = {2, 2, 3, 5};

    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    intersectArrays(arr1, n1, arr2, n2);

    return 0;
}

