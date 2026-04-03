#include <iostream>
using namespace std;

int getMax(int arr[], int n){
    int maxi = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

int getMin(int arr[], int n){
    int mini = arr[0];

    for(int i=1;i<n;i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
    }
    return mini;
}

int main(){
    int arr[] = {10,5,20,8,25};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Maximum: "<<getMax(arr,n)<<endl;
    cout<<"Minimum: "<<getMin(arr,n)<<endl;

    return 0;
}