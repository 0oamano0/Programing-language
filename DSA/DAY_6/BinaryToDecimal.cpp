//! Binary to Deciaml

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int num;
    cout<<"Enter the Binary Number : ";
    cin>>num;

    int ans=0;
    int i=0;
    while(num!=0){

        int digit=num%10;
        if(digit==1){
            ans=ans+digit*pow(2,i);
        }

        num=num/10;
        i++;

    }

    cout<<"Decimal : "<<ans<<endl;
}