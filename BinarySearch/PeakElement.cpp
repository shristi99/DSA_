#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int peak(vector<int>&arr){

    int s=0,e=arr.size()-1;
    while(s<e){
        int mid= s+(e-s)/2;
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else
          e=mid;
    }

    return s;

}

int main(){

vector<int>a {1,2,3,4,5,9,10,20,14,12,8};
cout<<"peak element is coming in the index " <<peak(a)<<endl;

}