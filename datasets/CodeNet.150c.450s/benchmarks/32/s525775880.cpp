#include <bits/stdc++.h>
using namespace std;

int main(){
  while(1){
  int m,l,r;
  cin>>m>>l>>r;
  if(!m&&!l&&!r)break;

  int a[300];
  for(int i=0;i<m;i++)cin>>a[i];

  sort(a,a+m);
  reverse(a,a+m);
  int gap=0,n;
  for(int i=l-1;i<r;i++)
    if(a[i]-a[i+1]>=gap)n=i,gap=a[i]-a[i+1];
  
  cout <<n+1<<endl;
  }
  return 0;
}