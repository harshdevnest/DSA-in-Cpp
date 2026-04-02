#include <iostream>
using namespace std;

// int big = INT_MIN;
int maxElement( int size, int arr[], int i=0,int big = INT16_MIN){
    if (i==size){
        return  big;
    }

    big = max(arr[i],big);
    return maxElement(size,arr,i+1,big);
}

int main (){
    int arr[10]= {1,2,3,4,5,6,7,8,9,0};
    int length = sizeof(arr)/sizeof(arr[0]);

    cout<<maxElement(length,arr);

    return 0;
}