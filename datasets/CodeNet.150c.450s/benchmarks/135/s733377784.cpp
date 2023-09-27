#include<iostream>
using namespace std;
int t[2000],u[2000];
int a[2000000],b[2000000];
int N,M;
int main(){
  while(1){
    cin>>N>>M;
    if(N==0&&M==0)break;
    for(int i=0;i<2000000;i++)a[i]=b[i]=0;
    for(int i=1;i<=N;i++)cin>>t[i],t[i]+=t[i-1];
    for(int i=1;i<=M;i++)cin>>u[i],u[i]+=u[i-1];
    for(int i=1;i<=N;i++)
      for(int j=i;j<=N;j++)
	a[t[j]-t[i-1]]++;
    for(int i=1;i<=M;i++)
      for(int j=i;j<=M;j++)
	b[u[j]-u[i-1]]++;
    int ans=0;
    for(int i=0;i<2000000;i++)ans+=a[i]*b[i];
    cout<<ans<<endl;
  }
  return 0;
}