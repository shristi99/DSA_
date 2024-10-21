#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxSubarray(vector<int>arr){
    int n=arr.size();
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        int curr_sum=0;
        for(int j=i;j<n;j++){
          curr_sum+=arr[j];
          ans=max(ans,curr_sum);
        }
    }

    return ans;
}

//kadane's algo
//max_so_far and max_till_now

int subarraySumm(vector<int>arr){
    int curr_sum=0,max_till_now=INT_MIN;
    for(int i=0;i<arr.size();i++){
        curr_sum=max(arr[i],curr_sum+arr[i]);
        max_till_now=max(max_till_now,curr_sum);
    }
    return max_till_now;
}

int main(){
 
vector<int>arr{5,4,-1,7,8};
// cout<<maxSubarray(arr);

cout<<subarraySumm(arr);


}