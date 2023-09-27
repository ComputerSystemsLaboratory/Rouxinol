#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  while(1){

  int n,m,b,d[1000000]={},a,mx=0;
  cin>>n>>m;
  if(n+m==0) break;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    d[b]+=a;
 mx=max(mx,b);
  }

  for(int i=mx;i>=0;i--){
    if(d[i]>0 && m>0){
      int t= d[i];
      d[i]-=m;
      m-=t;
      }
  }
  int ans=0;
  for(int i=0;i<=mx;i++)
    if(d[i]>0) ans+=(i*d[i]);
     cout<<ans<<endl;
  }
  return 0;
}