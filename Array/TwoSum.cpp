#include <iostream>
using namespace std;

bool findPairWithSum(int arr[], int n, int target, int& num1, int& num2) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                num1 = arr[i];
                num2 = arr[j];
                return true; 
            }
        }
    }
    return false; 
}

int main() {
    int arr[] = {2, 7, 11, 15}; 
    int target = 9;            
    int n = sizeof(arr) / sizeof(arr[0]); 

    int num1, num2; 

    if (findPairWithSum(arr, n, target, num1, num2)) {
        cout << "Pair found: " << num1 << " and " << num2 << endl;
    } else {
        cout << "No pair with the target sum found." << endl;
    }

    return 0;
}

