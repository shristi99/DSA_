#include<iostream>
#include<vector>
using namespace std;


int sqroot(int num){
    int s=0,e=num,ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(mid*mid==num){
            return mid;
        }
        else if(mid*mid>num){
            e=mid-1;
        }
        else{
            ans=mid;
        s=mid+1;
        }
    }
    return ans;
}

int main(){

int num=36;
cout<<sqroot(num)<<endl;

}