#include<iostream>
#include<vector>
#include<queue>

#define MAX_N 100000

#define INF (1LL<<62)
#define COST first
#define ID second

using namespace std;

typedef long long ll;
typedef pair<ll,ll> State;

int N,E;
vector<State>G[MAX_N];

void dijkstra(int st){
  priority_queue<State,vector<State>,greater<State> > que;
  que.push(State(0,st));
  ll dist[MAX_N];
  fill(dist,dist+MAX_N,INF);
  dist[st]=0;
  while(!que.empty()){
    State now = que.top();
    que.pop();
    if(dist[now.ID]<now.COST)continue;
    dist[now.ID]=now.COST;
    for(int i=0;i<G[now.ID].size();i++){
      ll cost = now.COST+G[now.ID][i].COST;
      ll to = G[now.ID][i].ID;
      que.push(State(cost,to));
    }
  }
  for(int i=0;i<N;i++){
    if(dist[i]==INF)cout << "INF" << endl;
    else cout << dist[i] << endl;
  }
}


int main(void){
  
  int st;
  cin >> N >> E >> st;

  int a,b,c;
  for(int i=0;i<E;i++){
    cin >> a >> b >> c;
    G[a].push_back(State(c,b));
  }
  
  dijkstra(st);
  
  return 0;
}