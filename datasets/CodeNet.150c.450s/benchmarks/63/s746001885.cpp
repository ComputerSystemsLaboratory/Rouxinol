#include <iostream>
#include <set>
#include <vector>
#include <utility>
#include <queue>

using namespace std;

int V, E, r;
vector<pair<int, int> > edges[100010];
priority_queue <pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > Q;
pair<int, int> Cost[100010];
const int Inf = 10000*100000 + 100;
bool t[100010], q[100010];
set<int> s;
int SizeQ;

int main() {
  cin >> V >> E >> r;
  for(int i = 0; i < E; i++) {
    int s;
    pair<int, int> e;
    cin >> s >> e.first >> e.second;
    edges[s].push_back(e);
  }
  for(int i = 0; i < V; i++) {
    Cost[i] = make_pair(Inf, i);
    t[i] = false;
    q[i] = false;
    //s.insert(i);
  }
  Cost[r].first = 0;
  Q.push(Cost[r]);
  SizeQ = 1;
  q[r] = true;
  while(SizeQ) {
    pair<int, int> u = Q.top();
    Q.pop();
    if(!t[u.second]) {
      SizeQ--;
      t[u.second] = true;
      /*
      s.erase(u.second);
      for(auto itr = s.begin(); itr != s.end(); itr++) {
	bool update = false;
	for(int i = 0; i < edges[*itr].size(); i++) {
	  if(Cost[edges[*itr][i].first].first != Inf && Cost[*itr].first > Cost[edges[*itr][i].first].first+edges[*itr][i].second) {
	    Cost[*itr].first = Cost[edges[*itr][i].first].first+edges[*itr][i].second;
	    update = true;
	  }
	}
	if(update) {
	  Q.push(Cost[*itr]);
	  if(!q[*itr]) {
	    SizeQ++;
	    q[*itr] = true;
	  }
	}
      }
      */
      for(int i = 0; i < edges[u.second].size(); i++) {
	if(Cost[edges[u.second][i].first].first > Cost[u.second].first + edges[u.second][i].second) {
	  Cost[edges[u.second][i].first].first = Cost[u.second].first + edges[u.second][i].second;
	  Q.push(Cost[edges[u.second][i].first]);
	  if(!q[edges[u.second][i].first]) {
	    SizeQ++;
	    q[edges[u.second][i].first] = true;
	  }
	}
      }
    }
  }
  for(int i = 0; i < V; i++){
    if(Cost[i].first != Inf) cout << Cost[i].first << endl;
    else cout << "INF" << endl;
  }
  return 0;
}

    