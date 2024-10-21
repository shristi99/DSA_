#include<iostream>
#include<vector>

using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){

    int i=0,j=0,k=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }

    while(i<n){
        arr3[k++]=arr1[i++];
    }

    while(j<m){
        arr3[k++] = arr2[j++];
    }
}

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
    }
}


int main(){

    int arr1[5]={1,2,3,4,5};
    int arr2[5]={3,6,7,8,9};

    int arr3[9] ={0};
    merge(arr1,5,arr2,5,arr3);

    printArray(arr3,10);
    


}