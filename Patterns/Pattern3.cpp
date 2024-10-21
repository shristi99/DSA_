#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// *****
// ****
// ***
// **
// *

void print(int n){
  for(int i=1;i<=n;i++){
    for(int j=n-i+1;j>0;j--){
        cout<<"*"<<" ";
    }
    cout<<endl;
  }
}

void print1(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){

int n=5;
print2(n);

}