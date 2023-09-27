#include <iostream>
#include <vector>
#include <queue>
using namespace std;


typedef pair<int,int> pii;
vector< vector<pii> > edges;
vector<bool> used;

int solve() {
    priority_queue<pii, vector<pii>, greater<pii> > que;
    for(int i=0; i<used.size(); i++)used[i] = false;
  
    que.push( make_pair(0,0) );
    int ret = 0;
    
    while(!que.empty()) {
        int cost = que.top().first, v = que.top().second;
        que.pop();
	
        if(used[v]) continue;
        used[v] = true;
        ret += cost;
        for(int i = 0; i < edges[v].size(); i++)
            que.push(pii(edges[v][i].first, edges[v][i].second));
    }
    return ret;
}


int main(){

  int V,E;
  
  cin >> V >> E;

  edges.resize(V);
  
  used.resize(V);

  for(int i=0; i<E; i++){
    int s,t,w;
    cin >> s >> t >> w;
    edges[s].push_back( make_pair(w,t) );
    edges[t].push_back( make_pair(w,s) );
  }

  cout << solve() << endl;

  return 0;
}

