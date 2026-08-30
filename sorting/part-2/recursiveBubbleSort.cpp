#include <bits/stdc++.h>
using namespace std;

// Recursively sorts an array of size n
void bubbleSort(vector<int>& arr, int n) {
    // Base case: array of size 0 or 1 is already sorted
    if (n <= 1) {
        return;
    }

    // One pass: push the largest element to the end (index n - 1)
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recur for the remaining n - 1 elements
    bubbleSort(arr, n - 1);
}

int main() {
    vector<int> arr = {3, 5, 1, 2, 4};
    int n = arr.size();

    cout << " array before RecursBubble sort: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;

    bubbleSort(arr, n);

    cout << " array after RecusBubble sort: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}