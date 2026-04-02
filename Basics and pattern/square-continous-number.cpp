#include <iostream>
using namespace std;
int main()
{
    // int n = 4;
    // int temp = 1;

    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j < n; j++)
    //     {
    //        cout<<temp<<" ";
    //        temp++;
    //     }
    //     cout<<endl;
    // }

    int n = 4;
    char ch = 'A';

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
           cout<<ch<<" ";
           ch+=1;
        }
        cout<<endl;
    }
    return 0;
}