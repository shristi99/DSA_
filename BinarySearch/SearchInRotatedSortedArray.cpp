#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//fid the pivot element basicaly in which line 
//target exists
//then write teh condition and do bs

int getpivot(int arr[],int n){
int s=0,e=n-1;
while(s<e){
    int mid=s+(e-s)/2;
    if(arr[mid]>=arr[0]){
        s=mid+1;
    }
    else{
        e=mid;
    }
   
}
return s;
}

int binarySearch(int a[],int key,int s,int e){

  int l=s,r=e;
  while(l<=r){
    int mid=l+(r-l)/2;

    if(a[mid]==key){
        return mid;
    }
    else if(a[mid]<key){
        l=mid+1;
    }
    else
    r=mid-1;
  }
  return -1;

}

int main(){

   int a[]={4,5,6,7,0,1,2};
   int n=7;
    int pivot=getpivot(a,n);
    cout<<"pivot :" << pivot;
    int target=0;
    if(target>=a[pivot] && target<=a[n-1]){
       cout<<binarySearch(a,target,pivot,n-1);
    }
    else{
        cout<<binarySearch(a,target,0,pivot-1);
    }

}