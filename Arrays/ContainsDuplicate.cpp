#include<iostream>
#include<bits/stdc++.h>


using namespace std;

//O(n2) , O(1)
bool dup(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                return true;
            }
        }
    }
    return false;
}


//sorting -- O(NlogN), O(1)
bool duplicate(vector<int>arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            return true;
        }
    }
    return false;
}

//map approach -- O(N), O(1)
bool duplicate2(vector<int>arr){
    unordered_map<int,int>map;
    for(auto it:arr){
        map[it]++;
    }

    for(auto i:map){
        if(i.second>1)
        return true;
    }
    return false;
}

int main(){

vector<int>arr{1,2,3,4,5,6};
if(duplicate2(arr)){
cout<<"their is a duplicate";
}
else{
cout<<"there are no duplicates";
}
}