#include <bits/stdc++.h>
using namespace std;

class Sorting
{
public:
    int partition(int arr[], int low, int high)
    {
        int pivot = arr[high];
        int i = low - 1; // can be consider as the element less than pivot

        for (int j = low; j < high; j++)
        {
            if (arr[j] <= pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }

        swap(arr[i + 1], arr[high]);

        return i + 1;
    }

    void quicksort(int arr[], int low, int high)
    {
        if (low < high)
        {
            int pivotIndex = partition(arr, low, high);

            quicksort(arr, pivotIndex + 1, high);
            quicksort(arr, low, pivotIndex - 1);
        }
    }
};

int main(){
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    Sorting qs;

    cout << "Before Using Quick Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call quick sort
    qs.quicksort(arr, 0, n-1);

    cout << "After Using Quick Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}