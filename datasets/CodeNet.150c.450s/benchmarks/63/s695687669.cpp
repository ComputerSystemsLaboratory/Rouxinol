#include<bits/stdc++.h>
using namespace std;
#define INF 1e9
typedef struct{
  int cost;
  int to;
}edge;

int main(){
  int V,E,r;
  vector< edge >v[100000];
  cin>>V>>E>>r;
  for(int i=0;i<E;i++){
    int s;
    edge t;
    cin>>s>>t.to>>t.cost;
    v[s].push_back(t);
  }
  int d[100000];
  for(int i=0;i<V;i++)d[i]=INF;
  d[r]=0;
  priority_queue< pair<int,int> > q;
  q.push(make_pair(0,r));
  while(!q.empty()){
    int cost=-q.top().first;
    int to=q.top().second;
    q.pop();
    if(cost>d[to])continue;
    for(int j=0;j<v[to].size();j++){
      edge e=v[to][j];
      
      int ncost=e.cost+cost;
      if(ncost<d[e.to]){
	d[e.to]=ncost;
	q.push(make_pair(-d[e.to],e.to));
      }
    }
  }
  for(int i=0;i<V;i++){
    if(d[i]==INF)cout<<"INF"<<endl;
    else cout<<d[i]<<endl;
  }
  return 0;
}