#include <iostream>
#include <string>
using namespace std;

void rvrsStr(string &s, int end, int start = 0)
{
    if (start >= end)
    {
        return;
    }

    swap(s[start], s[end]);

    rvrsStr(s, end - 1, start + 1);
}

int main(){
    string greeting = "hello";
    int end = greeting.length() - 1;

    cout << "original string is: " << greeting << endl;

    rvrsStr(greeting, end);

    cout << "reverse string is: " << greeting;

    return 0;
}

