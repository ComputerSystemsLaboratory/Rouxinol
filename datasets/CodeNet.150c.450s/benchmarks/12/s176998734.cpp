#include <bits/stdc++.h>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
#include <math.h>
#include<algorithm>
using namespace std;
#define MAX 250

int H[MAX+1];

int parent(int i){
  return i/2;
}

int left(int i){
  return i*2;
}

int right(int i){
  return i*2+1;
}

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>H[i+1];
  }

  for(int i=1;i<=n;i++){
    cout<<"node "<<i<<": key = "<<H[i]<<", ";
    if(parent(i)!=0){
      printf("parent key = %d, ",H[parent(i)] );
    }
    if(left(i)<=n){
      printf("left key = %d, ",H[left(i)]);
    }
    if(right(i)<=n){
      printf("right key = %d, ",H[right(i)]);
    }
    cout<<endl;
  }
}
