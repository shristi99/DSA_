#include<iostream>
#include<bits/stdc++.h>

using namespace std;



//  vector<int> productExceptSelf(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>ans(n,1);
//         int prod;
        
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 if(i==j){
//                     continue;
//                 }
//                 ans[i]=ans[i]*nums[j];
//         }
       
//         }
//                 return ans;
//     }


vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,1);
        vector<int>left(n,1);
        vector<int>right(n,1);
        
        left[0]=1;
        for(int i=1;i<n;i++){
            left[i]=left[i-1]*nums[i-1];
        }
        
        right[n-1]=1;
        for(int i=n-2;i>=0;i--){
            right[i]=right[i+1]*nums[i+1];
        }
        
        for(int i=0;i<n;i++){
            ans[i]=left[i]*right[i];
        }
        
        return ans;
    }


int main(){

  int n,val;
  cin>>n;

  vector<int>ans;

  for(int i=0;i<n;i++){
    cin>>val;
    ans.push_back(val);
  }

  vector<int>res= productExceptSelf(ans);
   cout<<res<<endl;
}