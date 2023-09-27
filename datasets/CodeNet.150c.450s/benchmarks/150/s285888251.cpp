#include <bits/stdc++.h>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
#include <math.h>
#include<algorithm>
using namespace std;
#define MAX 2000000
#define K 10000

int A[MAX],C[K+1],B[MAX+1];

void argCout(int A[],int N){
  cout<<A[1];
  for(int i=2;i<N;i++){
    printf(" %d",A[i]);
  }
  cout<<endl;
}

void CountingSort(int n){
  for(int i=0;i<=K;i++){
    C[i]=0;
  }
  for(int i=0;i<n;i++){
    C[A[i]]++;
  }
  for(int i=1;i<=K;i++){
    C[i]=C[i]+C[i-1];
  }
  for(int i=n-1;i>=0;i--){
    B[C[A[i]]]=A[i];
    C[A[i]]--;
  }
}

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    scanf("%d",&A[i]);
  }
  CountingSort(n);
  argCout(B,n+1);
}

