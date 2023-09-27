#include<iostream>
using namespace std;
long long n,k,w[100001],ma=0;

int fp(long long p){
  long long  sum=0,v=0;
  for(int i=0;i<k;i++){
    sum=0;
    while(sum+w[v]<=p){
      sum+=w[v];
      v++;
      if(v==n)return v;
    }
  }
  return v;
}

int main(){
  cin>>n>>k;
  for(int i=0;i<n;i++)cin>>w[i];
  long long l=0,r=1000000000,m;
  while(r-l>1){
    m=(l+r)/2;
    int v=fp(m);
    if(n<=v)r=m;
    else l=m;
  }
  cout<<r<<endl;
  return 0;
}