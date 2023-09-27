#include <bits/stdc++.h>
using namespace std;
int n,k,w[100000];

bool check(int x){
  int cnt=0,idx=0;
  while(idx<n){
    cnt++;
    if(cnt>k) return 0;
    int sum=0;
    while(sum+w[idx]<=x && idx<n) sum+=w[idx],idx++;
  }
  return 1;
}

int search(){
  int L=0,M,R=1e9+1;
  while(L<R){
    M = (L+R)/2;
    if(check(M)) R=M;
    else L=M+1;
  }
  return L;
}

int main(){
  cin>>n>>k;
  for(int i=0;i<n;i++) cin>>w[i];
  cout<<search()<<endl;
  
  return 0;
}