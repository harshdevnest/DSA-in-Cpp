#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int didSwap = 0;

        for (int j = 0; j < n-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }

    }
    cout << "after bubble sort: " << "\n";
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
}

int main()
{
    // Initialize array
    int arr[] = {13, 13, 13, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print array before sorting
    cout << "Before bubble sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // Call selection sort
    bubble_sort(arr, n);

    return 0;
}