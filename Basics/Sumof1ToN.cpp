#include<iostream>
using namespace std;

int main(){

int i=0,n=5;
int sum=0;

while(i<=n){
    sum=sum+i;
    i=i+1;
    cout<<"sum "<<sum<<endl;
}

cout<<"Sum of 5 numbers will be:" <<sum;

}