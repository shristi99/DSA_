#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// O(n3) O(1)
// int maxSubarray(vector<int>&nums){
//     int n=nums.size();
//     int sum,maxSum=INT_MIN;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             sum=0;
//             for(int k=i;k<=j;k++){
//                     sum+=nums[k];
//                     if(sum>maxSum)
//                      maxSum=sum;
//             }
//         }
//     }
//     return maxSum;
// }

//O(N2), O(1)
int maxSubarray(vector<int>nums){
    int n=nums.size();
    int sum,maxSum=INT_MIN;
    for(int i=0;i<n;i++){
            sum=0;
            for(int k=i;k<n;k++){
                    sum+=nums[k];
                    if(sum>maxSum)
                     maxSum=sum;
            }
        
    }
    return maxSum;
}

int maxSubarray(vector<int>nums){
    
    
}



int main(){
    int n,val;
    cin>>n;

     vector<int>array;
  
  for(int i=0;i<n;i++){
    cin>>val;
    array.push_back(val);
  }

  int res=maxSubarray(array);
  cout<<res<<endl;
}