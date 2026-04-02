#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {

        for (int j = n - i - 1; j > 0; j--)
        {
            cout << " ";
        }
        cout << "*";

        if (i > 0)
        {
            /* code */
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }

        cout << endl;
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = n - i - 1; j > 0; j--)
            cout << " ";

        cout << "*";

        if (i > 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
                cout << " ";

            cout << "*";
        }

        cout << endl;
    }
    
}