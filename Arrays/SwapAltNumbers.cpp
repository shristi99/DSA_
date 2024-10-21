#include<iostream>
using namespace std;
 
 void printArray(int a[],int size){
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
 }


void swapAlt(int a[],int n){
for(int i=0;i<n;i+=2){
    if(i+1<n){
      swap(a[i],a[i+1]);
    }
}

}

int main(){

int arr[8]={1,2,3,4,5,6,7,8};
int brr[5]={23,45,56,61,78};

swapAlt(arr,8);
printArray(arr,8);

swapAlt(brr,5);
printArray(brr,5);


}