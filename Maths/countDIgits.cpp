#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n=123 ;
    int x=n;
    int count=0;
    while(x!=0){
        x=x/10;
        count++;
    }

    cout<<count<<endl;
}