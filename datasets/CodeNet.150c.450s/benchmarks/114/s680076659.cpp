#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

void init(int n, vector<int>& v){
  v.resize(n);
  for(int i = 0; i < n; i++){
    v[i] = i;
  }
}

int root(int a, vector<int>& v){
  if(v[a] == a) return a;
  return (v[a] = root(v[a], v));
}

bool same(int a, int b, vector<int>& v){
  return root(a,v) == root(b,v);
}

void unite(int a, int b, vector<int>& v){
  v[root(a,v)] = root(b,v);
}


int main(){
  int n;
  cin >> n;
  vector<vector<int> > a(n, vector<int>(n, -1));
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
      cin >> a[i][j];

  vector<int> cost, src, dst;
  for(int i = 0; i < n; i++){
    for(int j = i+1; j < n; j++){
      if(a[i][j] > -1){
        cost.push_back(a[i][j]);
        src.push_back(i);
        dst.push_back(j);
      }
    }
  }
  vector<pair<int, int> > edges(cost.size());

  for(int i = 0; i < cost.size(); i++){
    // cout << "cost" << cost[i] << endl;
    // cout << "i" << i << endl;
    edges[i] = make_pair(cost[i], i);
    // cout << edges[i].first << " : " << edges[i].second << endl;
  }

  sort(edges.begin(),edges.end());

  // for(int i = 0; i < cost.size(); i++)
    // cout << edges[i].first << " : " << edges[i].second << endl;

  int sum = 0;
  vector<int> units;
  init(n, units);
  for(int i = 0; i < edges.size(); i++){
    int idx = edges[i].second;
    int s = src[idx], d = dst[idx];
    // cout << s << "," << d << endl;
    if(same(s, d, units))
      continue;
    unite(s, d, units);

    sum += cost[idx];
  }

  cout << sum << endl;
}