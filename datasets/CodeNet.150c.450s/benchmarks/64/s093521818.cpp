#include <bits/stdc++.h>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
#include <math.h>
#include<algorithm>
using namespace std;

int A[20],n;

int divc(int i,int m){
  if(m==0) return 1;
  if(i==n) return 0;
  return divc(i+1,m-A[i]) || divc(i+1,m);
}

int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    scanf("%d",&A[i]);
  }
  int q;
  cin>>q;
  for(int i=0;i<q;i++){
    int data;
    scanf("%d",&data);
    if(divc(0,data)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
  return 0;
}

