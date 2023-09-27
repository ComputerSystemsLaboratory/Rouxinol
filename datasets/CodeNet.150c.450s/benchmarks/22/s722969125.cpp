#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include<cmath>
#include<queue>
using namespace std;
int inf = 1000000000;

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

struct Node{
  int to, from, cost;
};

int main(){
  int n, m, r;
  cin >> n >> m >> r;
  vector<int> dist(n, inf);
  vector<Node> node(m);
  for(int i=0; i<m; i++){
    int s, t, d;
    cin >> s >> t >> d;
    node[i].to = t; node[i].from = s; node[i].cost = d;
  }

  dist[r] = 0;
  int l = 0;
  while( true ){
    if( l > 100000 ){
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
    bool f = false;
    for(int i=0; i<node.size(); i++){
      Node d = node[i];
      if( dist[d.from] != inf && dist[d.to] > dist[d.from] + d.cost ){
        dist[d.to] = dist[d.from] + d.cost;
        f = true;
      }
    }
    if( !f ) break;
    l++;
  }

  for(int i=0; i<n; i++){
    if( dist[i] == inf ) cout << "INF" << endl;
    else cout << dist[i] << endl;
  }

  return 0;
}





// EOF