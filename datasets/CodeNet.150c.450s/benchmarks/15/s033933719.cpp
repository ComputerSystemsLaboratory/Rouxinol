
#include <bits/stdc++.h>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<iostream>
#include <math.h>
#include<algorithm>
using namespace std;

int main(){
  int n,count=0;
  cin>>n;
  int S[10001];
  for(int i=0;i<n;i++){
    scanf("%d",&S[i]);
  }
  int q,data;
  cin>>q;
  for(int i=0;i<q;i++){
    scanf("%d",&data);
    S[n]=data;
    int k=0;
    while(data!=S[k]) k++;
    if(k!=n) count++;
  }
  cout<<count<<endl;
  return 0;
}

