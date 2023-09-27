#include <bits/stdc++.h>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
#include <math.h>
#include<algorithm>
using namespace std;
#define INFTY 1000000001

int A[500000],L[250001],R[250001],co=0;

void argCout(int N){
  cout<<A[0];
  for(int i=1;i<N;i++){
    printf(" %d",A[i]);
  }
  cout<<endl;
}

void merge(int left,int mid,int right){
  int n1=mid-left;
  int n2=right-mid;
  for(int i=0;i<n1;i++){
    L[i]=A[left+i];
  }
  for(int i=0;i<n2;i++){
    R[i]=A[mid+i];
  }
  L[n1]=INFTY;
  R[n2]=INFTY;
  int i=0;
  int j=0;
  for(int k=left;k<right;k++){
    if(L[i]<=R[j]){
      A[k]=L[i];
      i++;
    }else{
      A[k]=R[j];
      j++;
    }
    co++;
  }

}

void mergeSort(int left,int right){
  if(left+1<right){
    int mid=(left+right)/2;
    mergeSort(left,mid);
    mergeSort(mid,right);
    merge(left,mid,right);
  }
}

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    scanf("%d",&A[i]);
  }
  mergeSort(0,n);
  argCout(n);
  cout<<co<<endl;

}

