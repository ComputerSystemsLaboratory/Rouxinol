#include<bits/stdc++.h>

using namespace std;

const int IINF = INT_MAX;
int V,E,r;

vector<int> G[110000];
vector<int> W[110000];
int mindist[110000];

void dijkstra(){
  for(int i=0;i<V;i++) mindist[i] = IINF;
  mindist[r] = 0;
  priority_queue<int> Q;
  Q.push(r);
  while( !Q.empty() ){
    int cur = Q.top(); Q.pop();
    for(int i=0;i<(int)G[cur].size();i++){
      int next   = G[cur][i];
      int weight = W[cur][i];
      if( mindist[next] > mindist[cur] + weight )  {
	mindist[next] = mindist[cur] + weight;
	Q.push(next);
      }
    }
  }
}

int main(){

  cin >> V >> E >> r;

  for(int i=0;i<E;i++) {
    int s,t,d;
    cin >> s >> t >> d;
    G[s].push_back(t);
    W[s].push_back(d);
  }

  dijkstra();
  
  for(int t=0;t<V;t++) {
    if( mindist[t] != IINF ) cout << mindist[t] << endl;
    else                     cout << "INF" << endl;
  }

  return 0;
}