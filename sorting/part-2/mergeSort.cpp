#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int left = low;
    int right = mid + 1;
    vector<int> temp;

    while (left <= mid && right <= high)
    {
        if (arr[left] <= arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high)
    {
        temp.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = temp[i - low];
    }
}


void mergeSort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}

int main()
{
    int arr[] = {13, 13, 13, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print array before sorting
    cout << "Before merge sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // Call merge sort
    mergeSort(arr, 0, n - 1);

    // Print array after sorting
    cout << "After merge sort: " << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}

// it is an recursive sort method which is based on the concept of divide and then merge
// so in this approach we firstly call a function recursively in two parts:
//  1. first one is for the left part of array and
//  2. the second one is for the right part of the array
// and then after breaking down the array such it cant be futher divided we called the merge function which merges the array while soring them .