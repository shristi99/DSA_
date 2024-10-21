#include<iostream>
#include<bits/stdc++.h>

using namespace std;


vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>>mp;
        
        for(auto it:strs){
            string temp=it;
             sort(it.begin(),it.end());
            mp[it].push_back(temp);
            
        }
        
        vector<vector<string>>ans;
        
        for(auto i:mp){
            ans.push_back(i.second);
        }
        
        return ans;
        
    }


int main(){

    vector<vector<string>>ans;
    vector<string>s;

    for(int i=0;i)

    ans=groupAnagrams(s);
    cout<<ans<<" ";



}