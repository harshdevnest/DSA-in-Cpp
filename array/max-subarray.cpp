#include <iostream>
using namespace std;

void printSubarrays(int arr[], int size)
{
    int maxSum = 0;

    for (int i = 0; i < size; i++) // start
    {

        for (int j = i; j < size; j++) // end
        {
            int currentSum = 0;
            for (int k = i; k <= j; k++) // print
            {
                currentSum += arr[k];
                            maxSum = max(currentSum,maxSum);

            }
        }

    }
    cout<<maxSum;
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int length = (sizeof(arr) / sizeof(arr[0]));
    printSubarrays(arr, length);

    return 0;
}