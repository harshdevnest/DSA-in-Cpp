#include <iostream>
using namespace std;

void rvrsArray(int arr[], int end, int start= 0){
    if (start>=end)
    {
        return;
    }

    swap(arr[start],arr[end]);
    return rvrsArray(arr,end-1,start+1);
}

void printArray(int size,int arr[], int i=0){
    if (i==size){
        return ;
    }
    cout<< arr[i]<<" ";
    return printArray(size, arr , i+1);
}

int main (){
    int arr[]= {2,3,4,5,6,7,8,9,0};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout<<"original array: ";
    printArray(len,arr);
    cout<<endl;

    rvrsArray(arr,len-1);

    cout<<"reversed array: ";
    printArray(len,arr);
    cout<<endl;


}