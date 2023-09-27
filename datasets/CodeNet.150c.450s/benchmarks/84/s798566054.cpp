#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
#define INF 2000000000;
long long int cnt=0;

int merge(int *A, int left, int mid, int right){
    int i, j, k;
    int n1=mid-left;
    int n2=right-mid;
    int *L = (int*)malloc((n1+1)*sizeof(int));
    int *R = (int*)malloc((n2+1)*sizeof(int));


    for(i=0;i<n1;i++) L[i]=A[left+i];
    for(i=0;i<n2;i++) R[i]=A[mid+i];
    L[n1]=INF;
    R[n2]=INF;

    i=0;j=0;
    for(k=left;k<right;k++){
        if(L[i]>R[j]){
            A[k] = R[j];
            cnt+=n1-i;
            j++;
        }
        else{
            A[k]=L[i];
            i++;
        }
    }
    free(L);
    free(R);
    return 0;
}

int mergesort(int *A, int left, int right){
    if(left+1<right){
        int mid = (left+right)/2;
        mergesort(A, left, mid);
        mergesort(A, mid, right);
        merge(A, left, mid, right);
    }
    return 0;
}


int main(){
    int n;
    cin>>n;
    int *A = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++) cin>>A[i];
    mergesort(A, 0, n);
    //for(int i=0;i<n;i++) cout<<A[i]<<" ";
    cout<<cnt<<endl;
    free(A);
    return 0;
}

