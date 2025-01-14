#include<iostream>
#include<algorithm>
using namespace std;

// Function to sort the array
void sortarray(int arr[], int n) {
    sort(arr, arr + n);
}

// Function to find two numbers whose sum equals the target and return their indices
bool twoSum(int arr[], int n, int tar, int &index1, int &index2) {
    int st = 0, end = n - 1;
    while (st < end) {
        int sum = arr[st] + arr[end];
        if (sum == tar) {
            index1 = st;  // Store the index of the first element
            index2 = end;  // Store the index of the second element
            return true;
        } else if (sum > tar) {
            end--;
        } else {
            st++;
        }
    }
    return false;  // Return false if no pair is found
}

int main() {
    while (true) {
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;
        
        int arr[n];
        cout << "Enter the values of the array: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << "The array is: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        // Sort the array
        sortarray(arr, n);

        cout << "The sorted array is: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        int target;
        cout << "Enter the target sum: ";
        cin >> target;

        int index1, index2;
        if (twoSum(arr, n, target, index1, index2)) {
            cout << "The indices of the numbers that sum to the target are: " << index1 << " and " << index2 << endl;
        } else {
            cout << "No pair found with the given target sum." << endl;
        }   
        string choice;
        cout << "Do you want to run again? (yes/no): ";
        cin >> choice;
        
        if (choice != "yes") {
            break;  
        }
    }

    return 0;
}

