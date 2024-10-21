#include<iostream>
using namespace std;

int binarySearch(int a[],int key,int n){

  int l=0,r=n-1;
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

int a[]=   {1, 3, 4, 5, 6 };
int n=5;
int key =6;

cout<< binarySearch(a,key,n);


}