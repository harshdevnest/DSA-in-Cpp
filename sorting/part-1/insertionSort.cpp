#include <bits/stdc++.h>
using namespace std;

class Sorting
{
public:
    void insertionsort(int arr[], int n)
    {
        for (int i = 1; i < n; i++)
        {
            // Compare and swap backwards if the previous element is greater
            for (int j = i; j > 0 && arr[j - 1] > arr[j]; j--)
            {
                swap(arr[j], arr[j - 1]);
            }

    
        }

        cout << "after insertion sort: " << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{

    // Initialize array
    int arr[] = {13, 10, 26, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print array before sorting
    cout << "Before insertion sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // Call selection sort
    Sorting obj1;
    obj1.insertionsort(arr, n);

    return 0;
}