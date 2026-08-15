#include <bits/stdc++.h>
using namespace std;

void printNumber(int n)
{

    if (n <= 0)
    {
        return;
    }
    cout << n << endl;
    n--;
    printNumber(n);
}

int main()
{
    int n;

    cout << "enter N:" << endl;
    cin >> n;
    printNumber(n);
    return 0;
}