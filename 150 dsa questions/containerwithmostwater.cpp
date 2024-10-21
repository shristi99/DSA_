#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int maxHeight(vector<int>&height){
    int temp=0,maxArea=0;
  for(int i=0;i<height.size();i++){

    for(int j=i;j<height.size();j++){

       temp=min(height[i],height[j])*(j-i);
       maxArea=max(maxArea,temp);
    }
  }

  return maxArea;
   

}

int main(){
  
  int n,val;
  cin>>n;

  vector<int>height;
  
  for(int i=0;i<n;i++){
    cin>>val;
    height.push_back(val);
  }
  

  int ans=maxHeight(height);\
  cout<<ans<<endl;

}