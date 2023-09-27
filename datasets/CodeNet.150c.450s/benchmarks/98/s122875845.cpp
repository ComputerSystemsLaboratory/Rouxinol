#include<iostream>
#define INF 100000000
using namespace std;
int main(){
  while(1){
    int n,m,t[101],h[101];
    cin>>n>>m;
    if(n==0&&m==0)break;
    int ts=0,hs=0;
    for(int i=0;i<n;i++)cin>>t[i],ts+=t[i];
    for(int i=0;i<m;i++)cin>>h[i],hs+=h[i];
    int ans=INF;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
	if(ts-t[i]+h[j]==hs-h[j]+t[i]&&ans>t[i]){
	  ans=t[i];
	}
      }
    }
    if(ans==INF)cout<<"-1"<<endl;
    else cout<<ans<<" "<<(hs-ts)/2+ans<<endl;
  }
  return 0;
}