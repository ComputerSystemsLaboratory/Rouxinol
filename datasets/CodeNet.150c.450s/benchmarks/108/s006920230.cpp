#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,lis[111][111]={},d[111];
  for(int i=0;i<111;i++)d[i]=-1;
  cin>>n;
  for(int c=0;c<n;c++){
    int u,k,v;
    cin>>u>>k;
    for(int i=0;i<k;i++){
      cin>>v;
      lis[u][v]=1;
    }
  }
  queue< pair<int,int> > q;
  q.push(make_pair(1,0));
  while(!q.empty()){
    int from=q.front().first;
    int m=q.front().second;
    q.pop();
    if(d[from]==-1){
      d[from]=m;
      for(int i=1;i<=n;i++){
	if(lis[from][i])q.push(make_pair(i,m+1));
      }
    }
  }
  for(int i=1;i<=n;i++)cout<<i<<" "<<d[i]<<endl;
  return 0;
}