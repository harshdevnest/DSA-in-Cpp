//palindrome of number
#include <iostream>
using namespace std;

int  reverNum(int num,int rev = 0){
    
    if (num==0)
    {
        return rev;
    }
    
    rev = rev * 10 + (num%10);


    return reverNum(num/10,rev);
}

//check number with reversed 
bool compare(int num ,int revnum ){
    return num ==revnum;
}
int main (){
    int num;
    cout<<"enter a number to check its paindrome or not :"<<endl;
    cin>>num;

    bool result = compare(num,reverNum(num));

    if(result){
        cout<<"Hurray, number is palindrome !";
    }
    else cout<< "Oops, number is not plaindrome ! ";

    return 0;
}