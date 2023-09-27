#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;
int INF = 1 << 10;

struct edge{
  int to;
  int cost;
};

vector<vector<edge> > G(10);
vector<int> d(10, INF);
vector<P> ans;

void init(){
  for(int i = 0; i < 10; i++){
	d[i] = INF;
  }
}

void display_d(){
  for(int i = 0; i < 10; i++){
	if(d[i] == INF) cout << "INF ";
	else cout << d[i] << " ";
  }
  cout << endl;
}

void initG(){
  for(int i = 0; i < 10; i++){
	G[i].clear();
  }
}

void dijkstra(int s){
  priority_queue<P, vector<P>, greater<P> > que;
  init();
  d[s] = 0;
  que.push(P(0, s));
  while(!que.empty()){
	P p = que.top(); que.pop();
	int v = p.second;
	if(d[v] < p.first) continue;
	for(int i = 0; i < G[v].size(); i++){
	  edge e = G[v][i];
	  if(d[e.to] > d[v] + e.cost){
		d[e.to] = d[v] + e.cost;
		que.push(P(d[e.to], e.to));
	  }
	}
  }
  //cout << "d = ";
  //display_d();
  
}

int main(){
  int n = 0;
  while(1){
	cin >> n;
	if(n == 0) break;
	int a = 0, b = 0, c = 0;
	for(int i = 0; i < n; i++){
	  cin >> a >> b >> c;
	  edge e1, e2;
	  e1.to = b; e1.cost = c;
	  e2.to = a; e2.cost = c;
	  G[a].push_back(e1);
	  G[b].push_back(e2);
	}

	for(int i = 0; i < 10; i++){
	  dijkstra(i);
	  int sum = 0;
	  for(int j = 0; j < 10; j++){
		if(d[j] == INF) continue;
		sum += d[j];
	  }
	  if(sum != 0) ans.push_back(P(sum, i));
	}

	sort(ans.begin(), ans.end());
	cout << ans[0].second << " " << ans[0].first << endl;
	ans.clear();
	initG();
  }
  return 0;
}