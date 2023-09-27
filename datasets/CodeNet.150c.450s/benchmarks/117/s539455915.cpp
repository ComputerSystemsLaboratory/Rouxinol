#include<iostream>
#include<stdio.h>
using namespace std;
#define MAX 500000
#define S 2000000000

int L[MAX/2+2],R[MAX/2+2];
int cnt;

void merg(int a[],int n,int le,int mid,int ri){
    int n1=mid-le;
    int n2=ri-mid;
    for(int i=0;i<n1;i++)L[i]=a[le+i];
    for(int i=0;i<n2;i++)R[i]=a[mid+i];
    L[n1]=R[n2]=S;
    int i=0,j=0;
    for(int k=le;k<ri;k++){
        cnt++;
        if(L[i]<=R[j]){
            a[k]=L[i++];
        }else{
            a[k]=R[j++];
        }
    }
}

void mergesort(int a[],int n,int le,int ri){
    if(le+1<ri){
        int mid=(le+ri)/2;
        mergesort(a,n,le,mid);
        mergesort(a,n,mid,ri);
        merg(a,n,le,mid,ri);
    }
}

int main(){
    int a[MAX],n,i;
    cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    mergesort(a,n,0,n);
    for(int i=0;i<n;i++){
            if(i){cout<<" ";}
            cout<<a[i];
    }
    cout<<endl;
    cout<<cnt<<endl;
return 0;}