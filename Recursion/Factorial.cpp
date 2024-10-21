#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//factorial
int fact(int n){
    //base case
      if(n==0){
        return 1;
      }

      return n*fact(n-1);
}

//power of 2
int power(int n){
    //base case
    if(n==0){
        return 1;
    }

    return 2* power(n-1);
}

//pritn counting
void count(int n){
  
  //base case
  if(n==0)
  return;

  cout<<n<<endl;

  count(n-1);

  cout<<n<<endl;
}

int main(){

int n;
cin>>n;

// cout<<fact(n);

// cout<<power(n);

count(n);




}