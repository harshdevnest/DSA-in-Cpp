#include <iostream>
using namespace std ;

int main (){
    int x = 10 ;
    int* ptr;
    ptr = &x;
    
    cout<<"value of x :"<<x<<endl;
    cout<<"value of ptr: "<<ptr<<endl;
    cout<<"value of location of x: "<<&x<<endl;
    cout<<"value stored at loctn pointed by ptr: "<<*ptr<<endl;

    return 0;
}