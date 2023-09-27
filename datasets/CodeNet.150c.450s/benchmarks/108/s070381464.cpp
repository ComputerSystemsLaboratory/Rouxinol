#include <bits/stdc++.h>
using namespace std;
const int INF=1145141919;

#define debug cout<<"debug"<<endl;

int main(){

  int n;
  cin>>n;

  vector <int> g[n];

  for(int i=0;i<n;i++){

    int u,k;
    cin>>u>>k; u--;

    for(int j=0;j<k;j++){
      int v;
      cin>>v; v--;
      g[u].push_back(v);
    }

  }

  int dis[n];
  fill(dis,dis+n,INF);
  dis[0]=0;

  queue <int> bfs;
  bfs.push(0);

  for(;!bfs.empty();){

    int check=bfs.front(); bfs.pop();

    for(int i=0;i<(int)g[check].size();i++){

      int next=g[check][i];

      if(dis[next]>dis[check]+1){
	dis[next]=dis[check]+1;
	bfs.push(next);
      }

    }
  }

  for(int i=0;i<n;i++)
    cout<<i+1<<" "<<(dis[i]==INF?-1:dis[i])<<endl;

  return 0;

}

