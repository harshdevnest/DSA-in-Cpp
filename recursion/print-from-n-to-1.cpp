#include <iostream>
using namespace std ;
void print(int n){
    if (n==1){
        cout<<"1";
        return ;
    }
    cout <<n<<" ";
    print(n-1);
}

    //question:  what gonna happen if you let a function call iyself for infinite time ???

    // void print()
    // { 
    // cout<< "i will runn for infinite time"<<endl;
    // print();  // recursive call with no stopping condition
    // }

    // answer : the function will call itself untill the stack gets full (stack overflow)

int main (){
    print(5);
    return 0;

}