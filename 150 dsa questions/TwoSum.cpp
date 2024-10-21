#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//1st approach
// vector<int>solve(vector<int>&nums,int target){
//      int n=nums.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(nums[i]+nums[j]==target){
//                 return {i,j};
//             }
//         }
//     }

//     return {-1,-1};
// }

//2nd approach
vector<int> solve(vector<int>&nums,int target){

    unordered_map<int,int>mp;
 
     for(int i=0;i<nums.size();i++){
    int remaining=target-nums[i];
    if(mp.find(remaining)!=mp.end()){
        return {mp[remaining],i};
    }

    mp[nums[i]]=i;
     }

     return {-1,-1};

}




int main(){

  vector<int>nums;
  int n,val;
  int target;

  cin>>n>>target;

  for(int i=0;i<n;i++){
    cin>>val;
    nums.push_back(val);
  }

  vector<int>ans=solve(nums,target);

  for(int ele:ans){
    cout<<ele<<" ";
  }

}