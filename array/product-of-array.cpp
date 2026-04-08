//Brute force solution using nested loops

#include <iostream>
using namespace std;

 void productArray(int arr[],int size){
    int temp[size];
    for (int i = 0; i < size; i++)
    {   int res = 1;
        for (int j = 0; j < size; j++)
        {
            if (i == j) continue;

            res = res * arr[j];
        }
        temp[i] = res;
    }

     for (int i = 0; i < size; i++)
    {
        cout<<temp[i]<<" ";
    }
    
 }

 int main(){
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    productArray(arr,len);

    return 0;
 }