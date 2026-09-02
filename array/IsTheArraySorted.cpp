#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isSorted(int arr[], int n)
    {
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    int arr[6] = {1, 2, 3, 5, 6, 8};
    Solution sol;

    cout << boolalpha << "Is the array sorted=== " << sol.isSorted(arr, 6) << endl;
    return 0;
}