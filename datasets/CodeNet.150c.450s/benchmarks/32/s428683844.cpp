#include<bits/stdc++.h>
#define M 205
using namespace std;
int m,nmin,nmax,p[M],maxp,ans;

int main(){
  while(1){
    cin>>m>>nmin>>nmax;
    if(!m&&!nmin&&!nmax)break;
    maxp=ans=0;
    for(int i=0;i<m;i++)cin>>p[i];
    for(int i=nmax-1;i>=nmin-1;i--)
      if(p[i]-p[i+1]>maxp)
	maxp=p[i]-p[i+1],ans=i+1;
    cout<<ans<<endl;
  }
  return 0;
}