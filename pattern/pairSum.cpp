#include <iostream>
#include <vector>
using namespace std;

void findPairSumBruteForce(const vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")\n";
            }
        }
    }
}

int main() {
    // Use C++98-compatible syntax for array initialization
    int arr_data[] = {1, 5, 7, -1, 5};
    vector<int> arr(arr_data, arr_data + sizeof(arr_data) / sizeof(arr_data[0])); // Create vector from array

    int target = 6;

    cout << "Array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << "\nTarget Sum: " << target << "\n\n";

    findPairSumBruteForce(arr, target);

    return 0;
}

