#include<stdio.h>
#include<iostream>

using namespace std;

int main(){
    long long int a[10],temp,i,j;
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    for(i=0;i<10;i++){
        for(j=0;j<10-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=10-1;i>6;i--){
        cout<<a[i]<<"\n";
    }
    return 0;
}