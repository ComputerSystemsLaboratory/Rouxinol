#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;

int n;
typedef pair<int, int> P; //<cost, to>
vector<P> node[10];
priority_queue<P, vector<P>, greater<P> > que;

int dijkstra(int s, int city);

int main(){
  while(cin >> n, n){
    int city = -1;
    for(int i = 0; i < 10; i++) node[i].clear();
    for(int i = 0; i < n; i++){
      int a, b, c;
      cin >> a >> b >> c;
      node[a].push_back(P(c, b));
      node[b].push_back(P(c, a));
      city = max(city, a);
      city = max(city, b);
    }
    P mini = P(0, INT_MAX);
    for(int i = 0; i <= city; i++){
      int x = dijkstra(i, city);
      if(mini.s > x){
	mini.f = i;
	mini.s = x;
      }
    }

    cout << mini.f << " " << mini.s << endl;
  }
}

int dijkstra(int s, int city){
  int allcost = 0;
  for(int i = 0; i <= city; i++){
    que.push(P(0, s));
    int mincost = INT_MAX;
    bool moved[10][10] = {{false}};
    while(!que.empty()){
      P now = que.top(); que.pop();
      if(i == now.s) mincost = min(mincost, now.f);
      else{
	for(int j = 0; j < node[now.s].size(); j++){
	  P next = node[now.s][j];
	  if(!moved[now.s][next.s]){
	    moved[now.s][next.s] = true;
	    moved[next.s][now.s] = true;
	    next.f += now.f;
	    que.push(next);
	  }
	}
      }
    }
    allcost += mincost;
  }
  return allcost;
}