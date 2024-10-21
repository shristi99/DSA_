#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int fib(int n){
    if(n<=1){
        return n;
    }

    return fib(n-1) + fib(n-2);
}

//memoization -- storing the values in some map/table

int fib2(int n,vector<int>&dp){
    if(n<=1){
        return n;
    }

    if(dp[n]!=-1){
        return dp[n];
    }

 return dp[n]=fib2(n-1,dp) + fib2(n-2,dp);
}

//tabulation
int fib3(int n,vector<int>&dp){
   
   dp[0]=0;
   dp[1]=1;

   for(int i=2;i<=n;i++){
    dp[i]=dp[i-1]+dp[i-2];
   }

return dp[n];

}

//space optimization
int fib4(int n){
    int prev2=0;
    int prev=1;

    for(int i=2;i<=n;i++){
        int curr=prev+prev2;
        prev2=prev;
        prev=curr;
    }
    return prev;
}


int main(){
    int n;
    cin>>n;
    vector<int>dp(n+1,-1);

    // cout<<fib(n);

//    cout<<fib2(n,dp);

//    cout<<fib3(n,dp);

   cout<<fib4(n);
    

}