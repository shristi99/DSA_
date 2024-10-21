#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//take the maximuim ele and swap at adjacent places
void solve(int arr[],int n){
  
for(int i=0;i<n;i++){
    for(int j=1;j<n-i;j++){
        if(arr[j-1]>arr[j])
          swap(arr[j-1],arr[j]);
    }
}
}

int main(){
int arr[]={13,46,24,52,20,9};
int n=sizeof(arr)/sizeof(arr[0]);

solve(arr,n);

for(int i=0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
    cout<<endl; 
}