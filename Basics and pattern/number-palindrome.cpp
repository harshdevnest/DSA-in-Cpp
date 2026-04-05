//palindrome of number
#include <iostream>
using namespace std;

long long int  reverNum(long long num){
    long long int rev = 0 ;
    while (num >0)
    {
        /* code */
        int reminder = num%10 ;
        num = num/10;
        rev = rev * 10 + (reminder);
    }

    return rev;
}

//check number with reversed 
bool compare(long long int num ,long long int revnum ){
    if (num==revnum)
    {
        return true;
    }
    else return false;
}
int main (){
    long long int num;
    cout<<"enter a number to check its paindrome or not :"<<endl;
    cin>>num;

    bool result = compare(num,reverNum(num));

    if(result == true){
        cout<<"Hurray, number is palindrome !";
    }
    else cout<< "Oops, number is not plaindrome ! ";

    return 0;
}