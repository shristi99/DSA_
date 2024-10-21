#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// A
// AB
// ABC
// ABCD
// ABCDE

void print(int n){
    
    for(int i=0;i<n;i++){
        for(char c='A';c<='A'+i;c++){
            cout<<c<<" ";
        }
        cout<<endl;
    }
}

int main(){
int n=5;
print(n);

}