#include <iostream>
using namespace std;
int main()
{
    int n = 4;

    // //upper part
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " *";
        }
        for (int j = 0; j < 2 * (n - 1 - i); j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <=i ; j++)
        {
            cout << " *";
        }
        cout << endl;
    }

    // lower part
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " *";
        }

        // space
        for (int j = 0; j < 2 * (n - 1 - i); j++)
        {
            cout << "  ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}
