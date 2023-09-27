#include<bits/stdc++.h>
#define N 100001
#define M 1000000001
using namespace std;
int n,k,w[N];

bool check(int P){
  int x=0,sum;
  for(int i=0;i<k;i++){
    sum=0;
    for(int j=x;j<n;j++)
      if(sum+w[j]<=P)sum+=w[j],x++;
      else break;
    if(x==n)return true;
  }
  return false;
}

int bynary_search(){
  int l=0,r=M;
  while(l<r){
    int m=(l+r)/2;
    if(check(m))r=m;
    else l=m+1;
  }
  return l;
}

int main(){
  cin>>n>>k;
  for(int i=0;i<n;i++)cin>>w[i];
  cout<<bynary_search()<<endl;
  return 0;
}