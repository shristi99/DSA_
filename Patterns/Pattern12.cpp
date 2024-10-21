#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// A
// BB
// CCC
// DDDD
// EEEEE

void print(int n){
    for(int i=0;i<n;i++){
        char c='A'+i;
        for(int j=0;j<=i;j++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}

int main(){
int n=5;
print(n);

}