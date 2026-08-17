#include <bits/stdc++.h>
using namespace std;

int sumOf(int n){
    if (n<1)
    {
        return 0;
    }
    return n + sumOf(n-1);
    
}

int main (){
    int n;
    cout<<"enter the value of n :"<<  endl;
    cin>> n;
    int sum = sumOf(n);
    cout<< "sum of first n numbers is :"<<sum;
}5