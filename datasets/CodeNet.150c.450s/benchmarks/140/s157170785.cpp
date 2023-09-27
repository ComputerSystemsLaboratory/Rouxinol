#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

long long MOD = 1000000000 + 7;

struct UnionFind {
  vector<int> data;
  UnionFind(int size) : data(size, -1) { }
  bool unionSet(int x, int y) {
    x = root(x); y = root(y);
    if (x != y) {
      if (data[y] < data[x]) swap(x, y);
      data[x] += data[y]; data[y] = x;
    }
    return x != y;
  }
  bool findSet(int x, int y) {
    return root(x) == root(y);
  }
  int root(int x) {
    return data[x] < 0 ? x : data[x] = root(data[x]);
  }
  int size(int x) {
    return -data[root(x)];
  }
};

int main(){
  cout << setprecision(10);
  int N,M; cin >> N >> M;
  vector<pair<int, pair<int,int>>> v(M);

  for(int i = 0; i < M; i++){
    int x,y,z; cin >> x >> y >> z;
    v[i] = make_pair(z, make_pair(x,y));
  }

  sort(v.begin(), v.end());


  UnionFind tree(N);
  vector<pair<int,int>> ans;
  ll min_val = 0;
  for(int i = 0; i < M; i++){
    ll weight = (ll)v[i].first;
    int s = v[i].second.first;
    int t = v[i].second.second;

    if(tree.root(s) == tree.root(t)){
      continue;
    } else { 
      min_val += weight;
      tree.unionSet(s,t);
    }
  }
  cout << min_val << endl;
}

