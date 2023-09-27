#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
int INF = 1000000000;
int prim(int v, vector< vector< pair<int,int> > > G){
  //v: ????????°, G: ??£??\?????????
  priority_queue< pair<int, int> > wait;
  int result = 0;
  vector<bool> connected(v,false);
  vector<int> cost(v,INF);
  wait.push(make_pair(0, 0));
  while(!wait.empty()){
    int nowpoint = wait.top().second;
    int nowcost = -wait.top().first;
    wait.pop();
    if(!connected[nowpoint]){
      result += nowcost;
      connected[nowpoint] = true;
      for(int i = 0; i < G[nowpoint].size(); ++i){
	int nextpoint = G[nowpoint][i].second;
	int nextcost = G[nowpoint][i].first;
	if(nextcost < cost[nextpoint]){
	  wait.push(make_pair(-nextcost, nextpoint));
	  cost[nextpoint] = nextcost;
	}
      }
    }
  }
  return result;
}
int main(){
  int V, E, s, t, w;
  cin >> V >> E;
  vector< vector<pii> > G(V);
  for(int i = 0; i < E; ++i){
    cin >> s >> t >> w;
    G[s].push_back(pii(w,t));
    G[t].push_back(pii(w,s));
  }
  cout << prim(V,G) << endl;
  return 0;
}