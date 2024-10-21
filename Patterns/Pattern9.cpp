#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// 1      1 
// 12    21
// 123  321
// 12344321


void print(int n){
   int spaces=2*(n-1);
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
        cout<<j;
       }
       //spaces
       for(int j=1;j<=spaces;j++){
        cout<<" ";
       }

       for(int j=i;j>=1;j--){
        cout<<j;
       }
       spaces-=2;
       cout<<endl;
   }
}

int main(){
int n=5;
print(n);

}