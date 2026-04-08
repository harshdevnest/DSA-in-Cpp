/*
    Program: Product of Array Except Self

    Description:
    This program computes a new array where each element at index i
    is the product of all elements of the original array except arr[i].

    Approach:
    - Instead of using division, we use two auxiliary arrays:
        1. preProduct[] → stores the product of all elements to the left of i
        2. sufProduct[] → stores the product of all elements to the right of i
    - Final result for each index:
        product[i] = preProduct[i] * sufProduct[i]

    Steps:
    1. Initialize preProduct[0] = 1 (no elements to the left)
    2. Fill preProduct from left to right
    3. Initialize sufProduct[n-1] = 1 (no elements to the right)
    4. Fill sufProduct from right to left
    5. Multiply corresponding elements of preProduct and sufProduct

    Time Complexity: O(n)
    Space Complexity: O(n)

    Example:
    Input:  [-1, 2, -3, 4]
    Output: [-24, 12, -8, 6]

    Note:
    This method avoids division and works even when the array contains zero.
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> productArray(int arr[], int len)
{
    vector<int> preProduct(len);
    vector<int> sufProduct(len);
    vector<int> product(len);

    preProduct[0] = 1;
    sufProduct[len - 1] = 1;

    for (int i = 1; i < len; i++)
    {
        preProduct[i] = preProduct[i - 1] * arr[i - 1];
    }

    for (int i = len - 2; i >= 0; i--)
    {
        sufProduct[i] = sufProduct[i + 1] * arr[i + 1];
    }

    for (int i = 0; i < len; i++)
    {
        product[i] = preProduct[i] * sufProduct[i];
    }

    return product;
}

 int main(){
    int arr[]= {-1, 2, -3, 4};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout<<"array is :";
    for (int i = 0; i < len; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
    // cout<<"product array is :"<<productArray(arr,len);     wrong way to call and print 

    //right way 
    vector<int> result = productArray(arr,len);
    cout<<"product array is :";
    for (int i = 0; i < len ; i++)
    {
        cout<<result[i]<<" ";
    }
    
    return 0;
 }