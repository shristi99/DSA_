#include<iostream>
using namespace std;

///1 1 1
// 2 2 2
// 3 3 3

int main(){

    int i=1,n=3;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<i<<" ";
            j=j+1;
        }
        i=i+1;
        cout<<endl;
    } 
}