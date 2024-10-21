#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool sorted(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i])
            return false;
        }
    }
    return true;
}


bool sorted1(int a[],int n){
    for(int i=0;i<n;i++){
            if(a[i+1]<a[i])
            return false;
        
    }
    return true;
}


int main(){
   int arr[]={5,4,3,2,1};
   int n=sizeof(arr)/sizeof(arr[0]);

   bool ans=sorted(arr,n);
   if(ans){
    cout<<"True"<<endl;
   }
   else{
    cout<<"false"<<endl;
   }
}