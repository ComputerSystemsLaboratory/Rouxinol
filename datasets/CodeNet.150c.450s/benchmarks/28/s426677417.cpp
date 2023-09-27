#include<iostream>
using namespace std;
int n,k,w[100000];
bool check(int P){
  int c=0,i;
  int f=1;
  for(i=0;i<n&&f;){
    int p=0;
    if(P<w[i]){f=0;break;}
    while(i<n&&p+w[i]<=P)p+=w[i++];
    c++;
  }
  return c<=k&&f&&i==n;
}
int main(){
  int l=0,m,r=1000000000;
  cin>>n>>k;
  for(int i=0;i<n;i++)cin>>w[i];
  while(l<r){
    m=(l+r)/2;
    if(check(m))r=m;
    else l=m+1;
  }
  cout<<r<<endl;
  return 0;
}