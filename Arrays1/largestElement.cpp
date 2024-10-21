#include<iostream>
#include<bits/stdc++.h>

using namespace std;

   //1st approach -- is to sort the array and get the last ele
int solve(vector<int>&arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

//2nd approach -- take the maximum of all the elements
int solve1(vector<int>&arr){
    int maxx=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>maxx){
            maxx=arr[i];
        }
    }
    return maxx;
}

int main(){
 
   vector<int>arr1={2,5,1,3,0};
   vector<int>arr2={8,10,5,7,9};
   cout<<solve1(arr1)<<endl;
   cout<<solve(arr2);   
}