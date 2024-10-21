#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//1st approach
bool isSum(vector<int>arr,int sum){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==sum){
                return true;
            }
        }
    }
    return false;
}

//2nd approach -- 2 pointers
bool isSum2(vector<int>arr,int sum){
    sort(arr.begin(),arr.end());
     
     int l=0,r=arr.size();
     while(l<r){
        if(arr[l]+arr[r]==sum){
            return true;
        }
        else if(arr[l]+arr[r]<sum){
            l++;
        }
        else
          r--;
     }
     return false;
}

//approach -3 -- binary search
bool isSumm2(vector<int>arr,int sum){
   int l=0,r=arr.size()-1;
   while(l<=r){
      int mid=l+(r-l)/2;
      if(arr[l]+arr[r]==sum){
        return true;
      }
      else if(arr[l]+ arr[r]<sum){
        l=mid+1;
      }
      else{
        r=mid-1;
      }
   }
   return false;
}

int main(){
    vector<int>arr{1, 4, 45, 6, 10, -8};
    int sum=16;

    
    if(isSumm2(arr,sum)){
        cout<<"the sum of two elements is present";
    }
    else{
        cout<<"the sum is not present";
    }
    
}