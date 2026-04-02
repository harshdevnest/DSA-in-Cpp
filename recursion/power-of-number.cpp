#include<iostream>
using namespace std;
int power(int num,int pow){
    if (pow==0){
        return 1;
    }

    return num*power(num,pow-1);
}

int main (){

    int num,pow;

    cout<<"enter the number"<<endl;
    cin>> num;

    cout<< "enter the power"<<endl;
    cin>> pow;

    cout <<"answer is :"<< power(num,pow);
    
    return 0;

}