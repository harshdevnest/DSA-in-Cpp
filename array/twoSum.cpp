#include <iostream>
using namespace std;

void add(int arr[], int n, int target)
{
    
}

int main()
{
    int arr[] ={1,2,3,4,5,6,7};
    int target;
    int length = (sizeof(arr)/sizeof(arr[0]));

    cout<<"enter the target value :\n";
    cin>> target;

    add(arr,length,target);

    return 0;
}