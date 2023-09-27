#include<bits/stdc++.h>
#define rep(i,n) for(int (i) = 0;(i) < (n);(i)++)
#define SORT(c) sort((c).begin(),(c).end())
#define MOD 1000000007
using namespace std;
typedef long long ll;

struct UnionFind {
    vector<int> data;
    int sz;
    UnionFind(int sz) : data(sz, -1), sz(sz) { }
    bool unionSet(int x, int y) {
        if ((x = root(x)) == (y = root(y))) return false;
        if (data[x] > data[y]) swap(x, y);
        data[x] += data[y]; data[y] = x;
        sz--;
        return true;
    }
    bool findSet(int x, int y) { return root(x) == root(y); }
    int root(int x) { return data[x] < 0 ? x : data[x] = root(data[x]); }
    int size(int x) { return -data[root(x)]; }
    int size() {return sz;}
};

int main(void){
  int n, m;
  cin >> n >> m;

  UnionFind uf(n);
  rep(i, m){
    int s, t;
    cin >> s >> t;
    uf.unionSet(s, t);
  }

  vector<string> ans;
  int q;
  cin >> q;
  rep(i, q){
    int a, b;
    cin >> a >> b;
    if(uf.findSet(a, b)) ans.push_back("yes");
    else ans.push_back("no");
  }
  rep(i, ans.size()) cout << ans[i] << endl;
  return 0;
}

