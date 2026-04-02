#include <iostream>
using namespace std;
void printArray(int size,int arr[], int i=0){
    if (i==size){
        return ;
    }
    cout<< arr[i]<<" ";
    return printArray(size, arr , i+1);
}

int main(){
    int arr[10]= {1,2,3,4,5,6,7,8,9,0};
    int length = sizeof(arr)/sizeof(arr[0]);

    printArray(length,arr);
    return 0;
}