#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,20,30,40,50}; // MUST be sorted
    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 40;

    int result = binarySearch(arr,n,key);

    if(result != -1)
        cout<<"Element found at index: "<<result;
    else
        cout<<"Element not found";

    return 0;
}