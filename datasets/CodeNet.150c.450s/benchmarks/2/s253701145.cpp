#include <bits/stdc++.h>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
#include <math.h>
#include<algorithm>
using namespace std;
#define MAX 100000

int A[MAX];

void argCout(int A[],int N,int l){
  for(int i=0;i<N;i++){
    if(i) cout<<" ";
    if(i==l) cout<<"[";
    printf("%d",A[i]);
    if(i==l) cout<<"]";
  }
  cout<<endl;
}

int partition(int A[],int p,int r){
  int x=A[r];
  int i=p-1;
  for(int j=p;j<r;j++){
    if(A[j]<=x){
      i++;
      swap(A[i],A[j]);
    }
  }
  swap(A[i+1],A[r]);
  return i+1;
}

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    scanf("%d",&A[i]);
  }
  int l=partition(A,0,n-1);
  argCout(A,n,l);
}

