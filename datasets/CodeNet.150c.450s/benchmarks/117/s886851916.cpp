#include <stdio.h>
#include <cmath>
#include <iostream>

using namespace std;
#define MAX 500000;
#define SENTINEL 2000000000;
int count=0;

void merge(int A[], int left, int mid, int right){
    int n1=mid-left;
    int n2=right-mid;
    int L[500000/2+2],R[500000/2+2];
    for(int i=0;i<n1;i++) L[i]=A[left+i];
    for(int i=0;i<n2;i++) R[i]=A[mid+i];
    L[n1]=SENTINEL;
    R[n2]=SENTINEL;
    int i=0,j=0;
    for(int k=left;k<right;k++){
        count++;
        if(L[i]<=R[j]){
            A[k]=L[i++];
        }else{
            A[k]=R[j++];
        }
    }

};

void mergeSort(int A[], int left, int right){
    if (left+1<right){
        int mid=(left+right)/2;
        mergeSort(A,left,mid);
        mergeSort(A,mid,right);
        merge(A,left,mid,right);
    }
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int A[500001];
    for(int i=0;i<n;i++)scanf("%d",&A[i]);
    mergeSort(A,0,n);
    for(i=0;i<n;i++){
        if(i)cout<<" ";
        cout<<A[i];
    }
    cout<<endl;
    cout<<count<<endl;
    return 0;
}
