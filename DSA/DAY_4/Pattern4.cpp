//! Pattern 4 -> Print reverse number rectangle pattern.
#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    int i=1;
    while(i<=n){

        int j=1;
        while(j<=n){
            cout<<n-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

}

/*
! Output
? Enter the Number : 3
? 3 2 1
? 3 2 1
? 3 2 1

*/