#include <iostream>
using namespace std;

void print(int arr[][3], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}};

    int arr2[2][3] = {1, 2, 3, 4, 5, 6};

    int arr3[2][3] = {
        {5, 0, 0},
        {0, 5, 0}
    };

    print(arr, 2);
    print(arr2, 2);
    print(arr3, 2);

    return 0;
}