#include <bits/stdc++.h>

using namespace std;


const int MAX_N = 1000000;
int par[MAX_N];

//syokika
void init(int n){
  for(int i = 0; i < n; i++) par[i] = i;
}

//kinonewomotomeru
int root(int x){
  if(par[x] == x){
    return x;
  }else{
    return par[x] = root(par[x]);
  }
}

//hanntei
bool same(int x, int y){
  return root(x) == root(y);
}

void unite(int x, int y){
  x = root(x);
  y = root(y);
  if(x == y) return;

  par[x] = y;
}

int main(void){

  int n, m;
  cin >> n >> m;

  vector<int> adj[n];

  //syokika
  init(n);

  //heigou
  for(int i = 0; i < m; i++){
    int s, t; cin >> s >> t;
    unite(s, t);
  }

  int q; cin >> q;

  for(int i = 0; i < q; i++){
    int s, t; cin >> s >> t;
    if(same(s, t)) cout << "yes" << endl;
    else cout << "no" << endl;
  }
  


  return 0;

}