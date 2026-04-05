#include <iostream>
using namespace std;

void twoSum(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) // avoid same index
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "Pair found: " << arr[i] << " , " << arr[j];
                return;
            }
        }
    }
    cout << "Pair not found";
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter target: ";
    cin >> target;

    twoSum(arr, n, target);

    return 0;
}