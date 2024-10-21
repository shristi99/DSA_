#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> givenSum(vector<int>arr,int s){
    int n=arr.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        int curr_sum=arr[i];
        if(curr_sum==s){
           ans.push_back(i); 
           return {};
        }

        for(int j=i+1;j<n;j++){
            curr_sum+=arr[j];
            if(curr_sum==s){
                ans.push_back(i);
                ans.push_back(j);
                return {};
            }
        }
    }
    return ans;
}

int main(){

vector<int>arr{15, 2, 4, 8, 9, 5, 10, 23 };
int sum=23;
vector<int>ans =givenSum(arr,sum);
for(auto i:ans){
    cout<<i<<endl;
}
}