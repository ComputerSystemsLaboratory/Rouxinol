#include<bits/stdc++.h>
using namespace std;
#define INF (1<<20)
typedef pair<int,int> P;

vector<P> edge[10];

int dijkstre(int pos){
  int min_cost[10];
  fill_n(min_cost,10,INF);
  priority_queue<P,vector<P>,greater<P> > que;
  que.push(P(0,pos));
  while(!que.empty()){
    P p = que.top(); que.pop();
    int cost = p.first;
    int now = p.second;
    if(min_cost[now] < cost) continue;
    min_cost[now] = cost;
    for(int i=0;i<edge[now].size();i++){
      int nc = edge[now][i].second;
      int next = edge[now][i].first;
      if(cost+nc < min_cost[next]){
	que.push(P(cost+nc,next));
      }
    }
  }
  int sum = 0;
  for(int i=0;i<10;i++){
    if(min_cost[i] != INF){
      sum += min_cost[i];
    }
  }
  return sum;
}

int main(){
  int n;
  while(1){
    cin >> n;
    if(n == 0) break;
    int l=100,r=0;
    for(int i=0;i<10;i++){
      edge[i].clear();
    }
    for(int i=0;i<n;i++){
      int a,b,c;
      cin >> a >> b >> c;
      edge[a].push_back(P(b,c));
      edge[b].push_back(P(a,c));
      l = min(min(l,a),b);
      r = max(max(r,a),b);
    }
    int ans = INF;
    int pos = l;
    for(int i=l;i<=r;i++){
      int tmp = dijkstre(i);
      if(ans > tmp){
	pos = i;
	ans = tmp;
      }
    }
    cout << pos << " " << ans << endl;
  }
}