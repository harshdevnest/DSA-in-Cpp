#include <bits/stdc++.h>
using namespace std;

// Recursive insertion sort function
void insertion_sort(int arr[], int i, int n) {
    // Base Case: if index reaches the size, return
    if (i <= 0) return;

    insertion_sort(arr, i-1, n);

    while (i > 0 && arr[i - 1] > arr[i]) {
        swap(arr[i] , arr[i-1]);
        i--;
    }

}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Using Insertion Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call recursive insertion sort
    insertion_sort(arr, n-1, n);

    cout << "After Using Insertion Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}