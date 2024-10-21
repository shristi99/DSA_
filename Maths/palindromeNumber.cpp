#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int reverse(int x){
    int y=0;
    while(x>0){
        int dig=x%10;
        y=y*10+dig;
        x=x/10;
    }

    return y;
}

int main(){
  int x=123;
  int y=reverse(x);
  if(x==y){
    cout<<"palindrome number";
  }
  else{
    cout<<"not a palindrome number";
  }

}