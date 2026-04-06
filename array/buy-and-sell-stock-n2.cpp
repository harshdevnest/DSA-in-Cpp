// Brute Force algorithm -_-

#include <iostream>
#include <climits>

using namespace std;

int buyAndSell(int arr[],int size){
    int profit = INT_MIN;
    
    for (int i = 0; i < size; i++)
    {
        for(int j = i+1;j<size;j++){
            profit = max(profit,(arr[j]-arr[i]));
        }
    }
    if (profit<0)
    {
        return 0;
    }
    
    return profit;
}

int main(){
    int arr[]= {1, 3, 6, 9, 11};
    int len= sizeof(arr)/sizeof(arr[0]);

    cout<<"profit is :"<<buyAndSell(arr,len);
    return 0;
}