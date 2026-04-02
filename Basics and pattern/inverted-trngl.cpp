#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    int temp = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (j < i)
            {
                cout << " ";
            }
            else{
                cout << temp;
            }
        }
        temp++;
        cout << endl;
    }
}