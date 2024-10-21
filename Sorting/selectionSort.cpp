#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//1. we have to find the minimum element and put it in the left side

void solve(int arr[],int n){
  
  for(int i=0;i<n-1;i++){
    int mini=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[mini]){
            mini=j;
        }
    }
    //swap
     swap(arr[i],arr[mini]);
    
  }


cout<<"after completion of selection sort, printing the array";
  for(int z=0;z<n;z++){
    cout<<arr[z]<<" ";
  }

}


int main(){
 
int arr[] = {13,46,24,52,20,9};
int n = sizeof(arr) / sizeof(arr[0]);
 
solve(arr,n);

}