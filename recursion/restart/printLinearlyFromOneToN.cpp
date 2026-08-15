#include <bits/stdc++.h>
using namespace std;

void printNumber(int n, int temp)
{

    if (temp > n)
    {
        return;
    }
    cout << temp << endl;
    temp++;
    printNumber(n, temp);
}

int main()
{
    int n, temp = 1;

    cout << "enter N:" << endl;
    cin >> n;
    printNumber(n, temp);
    return 0;
}