//! Reverse Number (in between int range)

#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"Enter the Number : ";
    cin>>num;

    int ans=0;
    while(num!=0){

        int digit=num%10;
        ans=ans*10+digit;
        num=num/10;
        
    }
    if((ans>INT_MAX/10) || (ans<INT_MIN/10)){

        cout<<"Result is : 0";
    }else{
        cout<<"Reverse Number is : "<<ans;
    }
    
}
