#include "bits/stdc++.h"
using namespace std;
using ll = long long;

template <typename TYPE>
void print_vec(const vector<TYPE>& v){
	for(int i=0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}

template <typename TYPE>
void print_vec2(const vector<vector<TYPE>>& v){
  cout << endl; cout << "       ";
  for(int i=0; i<v[0].size(); i++) cout << i << "   "; 
  cout << endl;
	for(int i=0; i<v.size(); i++){
		cout << "i=" << i << ":   ";
		for(int j=0; j<v[i].size(); j++){
			if(v[i][j] == 0) cout << "\x1B[0m" << v[i][j] << "   ";
      else cout << "\x1B[31m" << v[i][j] << "   ";//https://stackoverrun.com/ja/q/12618775
		}
		cout << "\x1B[0m" << endl;
	}
}


struct UnionFind{
  vector<int> parent;// parent[i]: iの親の番号
  UnionFind(int n): parent(n){
    for(int i=0; i<n; i++) parent[i] = i;
  }

  int root(int x){
    if(parent[x] == x) return x;
    return parent[x] = root(parent[x]);
  }

  void unite(int x, int y){
    int rx = root(x);
    int ry = root(y);
    if(rx == ry) return;
    parent[rx] = ry;
  }

  bool same(int x, int y){ return root(x) == root(y);}

};
 

using P = pair<int ,int>;
int main(){
	int V, E;
  cin >> V >> E;

  vector<pair<int, P>> vec;
  for(int i=0; i<E; i++){
    int s, t, w;
    cin >> s >> t >> w;
    vec.emplace_back(w, P(s, t));
  }
  sort(vec.begin(), vec.end());

  UnionFind uf(V);
  ll ans = 0;
  for(int i=0; i<E; i++){
    int w = vec[i].first;
    int s = vec[i].second.first;
    int t = vec[i].second.second;
    if(uf.same(s, t)) continue;
    uf.unite(s, t);
    ans += w;
  }
  
  cout << ans << endl;
	return 0;
}


