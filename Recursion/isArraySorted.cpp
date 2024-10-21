#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isSorted(int a[],int n){

    if(n==1|| n==0)
    return true;

    if(a[n-2]>a[n-1]){
        return false;
    }

    return isSorted(a,n-1);


}




int main(){

    int a[]={ 20, 20, 78, 98, 99, 97};
    int n=sizeof(a)/sizeof(a[0]);

    if(isSorted(a,n))
    cout<<"array is sorted";
    else
    cout<<"array is not sorted";

}