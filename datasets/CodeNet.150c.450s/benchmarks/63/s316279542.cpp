#include <iostream>
#include <vector>
#include <queue>
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
int INF = 1000000000;
vector<int> dijkstra(int s, int v, vector< vector< pair<int,int> > > G){
  //s: ?§????, v: ????????°, G: ??£??\?????????
  priority_queue< pair<int, int> > wait;
  vector<int> result(v, INF);
  result[s] = 0;
  wait.push(make_pair(0, s));
  while(!wait.empty()){
    int nowpoint = wait.top().second;
    int nowcost = wait.top().first;
    wait.pop();
    if(nowcost <= result[nowpoint]){
      for(int i = 0; i < G[nowpoint].size(); ++i){
	int nextpoint = G[nowpoint][i].second;
	int nextcost = -nowcost + G[nowpoint][i].first;
	if(nextcost < result[nextpoint]){
	  wait.push(make_pair(-nextcost, nextpoint));
	  result[nextpoint] = nextcost;
	}
      }
    }
  }
  return result;
}
int main(){
  int V, E, r, s, t, d;
  cin >> V >> E >> r;
  vector< vector<pii> > G(V);
  for(int i = 0; i < E; ++i){
    cin >> s >> t >> d;
    G[s].push_back(pii(d,t));
  }
  vector<int> result = dijkstra(r,V,G);
  for(int i = 0; i < V; ++i){
    if(result[i] >= INF){
      cout << "INF" << endl;
    }else cout << result[i] << endl;
  }
  return 0;
}