// Computes product of array elements except self using prefix and suffix arrays (no division)
// Time: O(n), Space: O(n)
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