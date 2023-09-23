#include <iostream>
#include <algorithm>
#include <cmath>
#include <limits>
#include <vector>
#include <cstdio>
#include <bits/stdc++.h>
#include <set>
#include <map>
#include <stdio.h>
using namespace std;
map <int ,int> mpa,mpb;
#define MAX 100000

int A[MAX],n;

int partition(int p,int r){
  int i,j=0,x,t;
  x=A[r];
  i=p-1;
  for(j=p;j<r;j++){
    if(A[j]<=x){
      i++;
      t=A[i];A[i]=A[j];A[j]=t;
    }
  }
  t=A[i+1];A[i+1]=A[r];A[r]=t;
  return i+1;
}

int main(){
  cin >> n;
  int q;
  for(int i=0;i<n;i++){
    cin >> A[i];
  }
  q=partition(0,n-1);
  for(int i=0;i<n;i++){
    if(i) cout << " ";
    if(i==q) cout << "[";
    cout << A[i];
    if(i==q) cout << "]";
  }
  cout << endl;
  return 0;
}
