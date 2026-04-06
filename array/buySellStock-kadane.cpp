// Kadane's algorithm -_-

#include <iostream>
#include <climits>

using namespace std;

int buyAndSell(int arr[], int size)
{
    int profit = INT_MIN;
    int bestBuy = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        bestBuy = min(bestBuy, arr[i]);
        profit = max(profit, (arr[i] - bestBuy));
    }
    if (profit < 0)
    {
        return 0;
    }

    return profit;
}

int main()
{
    int arr[] = {7,6,4,3,1};
    int len = sizeof(arr) / sizeof(arr[0]);

    cout << "profit is :" << buyAndSell(arr, len);
    return 0;
}