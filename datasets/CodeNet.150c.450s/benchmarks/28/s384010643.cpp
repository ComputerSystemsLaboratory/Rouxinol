#include<bits/stdc++.h>
using namespace std;
int n,m,a[1000001],x;
bool ch(int mid){
  int res=1,now=0;
  for(int i=0;i<n;i++){
    now+=a[i];
    if(now>mid)res++,now=a[i];
    if(a[i]>mid)return 0;
  }
  return res<=x;
}
int main(){
  cin>>n>>x;
  for(int i=0;i<n;i++)cin>>a[i];
  int l=0,r=1e9;
  while(l<r){
    int mid=(l+r)/2;
    if(ch(mid))r=mid;
    else l=mid+1;
  }
  cout<<l<<endl;
}