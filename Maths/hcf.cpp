#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void func(int i,int n){
    if(i>=n) return;
    cout<<i<<endl;

    func(i+1,n);
}

int main(){
    int n=4;
    func(1,n);


    // int c1=4,c2=8;
    // int ans;
    // for(int i=1;i<=min(c1,c2);i++){
    //     ans=i;
    // }

    // cout<<ans;
}