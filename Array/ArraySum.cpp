#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum =sum+arr[i];
    }
    return sum;
}

int main() {
    int n;

   
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

   
    cout << "Enter the elements of the array: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    
    int sum = sumOfArray(arr, n);
    cout << "Sum of the elements of the array: " << sum << endl;

    return 0;
}

