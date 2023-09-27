#include<bits/stdc++.h>
#define r(i,n) for(int i=0;i<n;i++)
using namespace std;
int main(){
  int n,m;
  while(cin>>n>>m,n){
    int a[n],b[m],sum1=0,sum2=0,ans=1e9,p1,p2;
    r(i,n)cin>>a[i],sum1+=a[i];
    r(j,m)cin>>b[j],sum2+=b[j];
    r(i,n)r(j,m){
      int a1=sum1,a2=sum2;
      a1+=b[j]-a[i];
      a2+=a[i]-b[j];
      if(a1==a2&&abs(a1-a2)<ans){
	ans=abs(a1-a2);
	p1=a[i];
	p2=b[j];
      }
    }
    if(ans==1e9)cout<<(-1)<<endl;
    else cout<<p1<<' '<<p2<<endl;
  }
}