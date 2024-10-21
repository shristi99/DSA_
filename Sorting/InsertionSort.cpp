#include<iostream>
#include<bits/stdc++.h>
using namespace std;


//takes an element and put it in the correct order
void solve(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
 int arr[]={98,64,23,6,90,21,87,34};
 int n=sizeof(arr)/sizeof(arr[0]);

 solve(arr,n);

}