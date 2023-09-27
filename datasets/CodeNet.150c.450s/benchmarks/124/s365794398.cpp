#include<iostream>
#include<queue>
#include<algorithm>
#include<cstring>

using namespace std;

typedef pair<int,int>pii;
#define INF 0x3f3f3f3f
#define fi first
#define se second

int mcos[105];
vector <pii> G[105];
int N;


void dijkstra(int start){
  priority_queue<pii,vector<pii>,greater<pii> > pq;

  pq.push( pii(0,start) );
  memset( mcos,INF,sizeof(mcos));
  mcos[start]=0;

  
  while(!pq.empty() ){
    const pii tmp=pq.top();
    pq.pop();
    
    const int now=tmp.se;
    
    if(mcos[now] < tmp.fi) continue;
    
    for(int i=0;i<G[now].size();++i){
      const int newcost = G[now][i].fi + tmp.fi;
      const int next= G[now][i].se;
      
      if(newcost < mcos[next] ){
	mcos[next]=newcost;
	pq.push( pii(newcost,next) );
      }
    }
  }
  return ;
  
}

int main (){
  cin>>N;
  int k,u,v,c;

  for(int i=0;i<N;i++){
    cin>>u>>k;
    for(int j=0;j<k;j++){
      cin>>v>>c;
      G[u].push_back(make_pair(c,v));
    }
  }
  dijkstra(0);
  for(int i=0;i<N;i++){
    cout<<i<<" "<<mcos[i]<<endl;
  }
  return 0;
}

