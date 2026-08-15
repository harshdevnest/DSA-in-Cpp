#include <bits/stdc++.h>
using namespace std;

void printName(string s,int n )
{

    if (n == 5)
    {
        return;
    }
    cout << s<< endl;
    n++;
    printName(s, n);
}

int main()
{
    int n = 0;
    string name;
    cout << "enter your name:" << endl;
    cin >> name;
    printName(name,n);
    return 0;
}