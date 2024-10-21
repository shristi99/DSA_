#include<iostream>
using namespace std;

int firstOcc(int a[],int key,int n){

int l=0,r=n-1,ans=-1;
while(l<=r){
    int mid=l+(r-l)/2;
    if(a[mid]==key){
      ans=mid;
      r=mid-1;
    }
    else if(a[mid]<key){
        l=mid+1;
    }
    else
      r=mid-1;
}

return ans;

}

int lastOcc(int a[],int key,int n){

int l=0,r=n-1,ans=-1;
while(l<=r){
    int mid=l+(r-l)/2;
    if(a[mid]==key){
      ans=mid;
      l=mid+1;
    }
    else if(a[mid]<key){
        l=mid+1;
    }
    else
    r=mid-1;
}

return ans;

}


int main(){

int a[]={0,0,1,2,3,3,3,3,4,5};
int n=10;
int key=3;

cout<<firstOcc(a,key,n)<<endl;
cout<<lastOcc(a,key,n);

}