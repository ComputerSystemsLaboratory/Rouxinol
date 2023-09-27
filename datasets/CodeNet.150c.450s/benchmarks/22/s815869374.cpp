//ベルマン・フォード法
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<queue>

using namespace std;

#define INF 1e9
using vvi = vector< vector<int> >;

int main(){
  int v, e, r;
  cin >> v >> e >> r;
  vector< pair<int, pair<int, int> > > edge;
  for(int i = 0; i < e; i++){
    int s,t,d;
    cin >> s >> t >> d;
    edge.push_back({s, {t,d}});
  }
  vector<int> d(v, INF);
  d[r] = 0;
  for(int i = 0; i < v; i++){
    for(int j = 0; j < e ; j++){
      if(d[edge[j].first] != INF && d[edge[j].second.first] > d[edge[j].first] + edge[j].second.second){
        d[edge[j].second.first] = d[edge[j].first] + edge[j].second.second;
        if(i == v-1){
          cout << "NEGATIVE CYCLE" << endl;
          return 0;
        }
      }
    }
  }
  for(int i = 0; i < v; i++){
    if(i == r){
      cout << 0 << endl;
    }
    else{
      if(d[i] == INF) cout << "INF" << endl;
      else cout << d[i] << endl;
    }
  }
}

