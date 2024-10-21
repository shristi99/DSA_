#include<iostream>
#include<bits/stdc++.h>

using namespace std;

//brute force
int solve(vector<int>v){
    int n=v.size();
   

    for(int i=0;i<n;i++){
         int cnt=0;

        for(int j=0;j<n;j++){
            if(v[j]==v[i]){
                cnt++;
            }
        }

        if(cnt>n/2){
            return v[i];
        }
        
    }
return -1;

}

//optimal approach 
int solve(vector<int>v){
    map<int,int>mp;
    int n=v.size();

    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }

    for(auto it:mp){
        if(it.second>n/2){
            return it.first;
        }
    }

    return -1;
}

//optimized aprroach - moore algo
int solve(vector<int>v){

    int cnt=1;
    int res=v[0];
    for(int i=0;i<n;i++){
        
        if(res==v[i]){
            cnt++;
        }
        else
           cnt--;

        if(cnt==0){
            res=v[i];
            cnt=1;
        }
    }

    return res;

}

int main(){




}