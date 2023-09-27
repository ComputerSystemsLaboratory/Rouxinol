#include <bits/stdc++.h>
using namespace std;
int n, m;
vector< list<int> > v;
vector<bool> used;
int p[100000];
int r[100000];

int find(int x){
  if(p[x] == x) return x;
  else return p[x] = find(p[x]);
}
void unite(int x, int y){
  x = find(x);
  y = find(y);
  if(x == y) return;

  if(r[x] < r[y])
    p[x] = y;
  else{
    p[y] = x;
    if(r[x] == r[y]) r[x]++;
  }
}

bool same(int x, int y){
  return find(x) == find(y);
}

void dfs(int pos, int bgn){
  if(used[pos]) return;
  used[pos] = true;
  unite(pos, bgn);
  for(list<int>::iterator it = v[pos].begin(); it != v[pos].end(); it++){
    dfs(*it, bgn);
  }
}

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);

  cin >> n >> m;
  v = vector< list<int> >(n, list<int>(0));
  used = vector<bool>(n, false);
  for(int i = 0; i < m; i++){
    int a, b; cin >> a >> b;
    v[a].push_back(b);
    v[b].push_back(a);
  }

  for(int i = 0; i < n; i++){
    p[i] = i;
    r[i] = 0;
  }

  for(int i = 0; i < n; i++){
    dfs(i, i);
  }

  int q; cin >> q;
  for(int i = 0; i < q; i++){
    int a, b;
    cin >> a >> b;
    if(same(a, b)) cout << "yes" << endl;
    else cout << "no" << endl;
  }
  return 0;
}