//! Pattern : 3 ->Printing Rectangual Number pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int i=1;
    while(i<=n){

        int j=1;
        while(j<=n){
            cout<<j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }

}


/*
! Output
? Enter the number : 3
? 1 2 3
? 1 2 3
? 1 2 3
*/