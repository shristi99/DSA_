#include<vector>
#include<iostream>

using namespace std;

vector<int> reverse(vector<int>v){

int s=0,e=v.size()-1;
while(s<=e){
swap(v[s],v[e]);
s++;
e--;
}
return v;
}

void printArray(vector<int>arr){

for(int i=0;i<arr.size();i++){
cout<<arr[i]<<" ";
}
}


int main(){

vector<int>v;
v.push_back(11);
v.push_back(12);
v.push_back(13);
v.push_back(14);
v.push_back(15);
v.push_back(16);

vector<int>ans = reverse(v);
printArray(ans);
}