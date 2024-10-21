#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//brute approach
// int maxProfit(vector<int>&prices){
//     int maxx=0;
//     int n=prices.size();
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             maxx=max(maxx,prices[j]-prices[i]);
//         }
//     }
//     return maxx;
// }



//optimized approach
    int maxProfit(vector<int>& prices) {
        int maxx=0,buying=INT_MAX;
        for(int i=0;i<prices.size();i++){
               buying=min(buying,prices[i]);
                maxx=max(maxx,prices[i]-buying);
            }
    
        return maxx;
        
    }


int main(){

  int n,val;
  cin>>n;

  vector<int>ans;

  for(int i=0;i<n;i++){
    cin>>val;
    ans.push_back(val);
  }

  int res= maxProfit(ans);
   cout<<res<<endl;
}