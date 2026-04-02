#include <iostream>
using namespace std;

void printSubarrays(int arr[], int size)
{

    for (int i = 0; i < size; i++) // start
    {

        for (int j = i; j < size; j++) // end
        {

            for (int k = i; k <= j; k++) // print
            
            {
                // cout << arr[k];
            }
            // cout << ",";
        }
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4};
    int length = (sizeof(arr) / sizeof(arr[0]));
    printSubarrays(arr, length);

    return 0;
}