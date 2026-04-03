#include <iostream>
using namespace std ;

int binarySearch(int arr[],int key ,int end ,int start =0){
    int mid = start + (end - start)/2;

    
    if (start > end) return -1;//base case never leave it behind buddy 

    if (arr[mid]==key){
        return mid;
    }
    if (arr[mid] < key ){
        return binarySearch(arr,key ,end, mid+1);
    }
    else return binarySearch(arr,key ,mid-1, start);
}

int main (){
    int arr[]= {2,4,6,8,9,10,12,13,14};
    int len = (sizeof(arr)/sizeof(arr[0])) -1;

    cout<<"index of the key is :"<<binarySearch(arr,14,len);

    return 0;
}