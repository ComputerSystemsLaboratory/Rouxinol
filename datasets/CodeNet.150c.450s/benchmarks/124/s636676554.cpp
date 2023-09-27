#include<iostream>
#define INF 100000000
using namespace std;
int main(){
  int n;cin>>n;
  int u,k,v,c;
  int mp[101][101],d[101];
  for(int i=0;i<=100;i++){
    d[i]=INF;
    for(int j=0;j<=100;j++)mp[i][j]=INF;
  }
    while(u!=n-1){
    cin>>u>>k;
    for(int i=0;i<k;i++){
      cin>>v>>c;
      mp[u][v]=c;
    }
  }
    
    int mn,s,t[101]={},cn=n-1;
    d[0]=0,t[0]=1;
    while(cn){
      mn=INF;
      for(int i=0;i<n;i++){
	if(t[i]==0){
	  if(d[i]>d[s]+mp[s][i])d[i]=d[s]+mp[s][i];
	  if(mn>d[i])mn=d[i],k=i;
	}
      }
      if(mn!=INF)cn--,t[k]=1,s=k;
    }
    for(int i=0;i<n;i++)cout<<i<<" "<<d[i]<<endl;
    
  return 0;
}