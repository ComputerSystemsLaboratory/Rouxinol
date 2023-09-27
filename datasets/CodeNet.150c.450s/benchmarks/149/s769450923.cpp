#include <iostream>
using namespace std;

int par[10001], depth[10001];

void init(int n){
 
  for(int i = 0; i < n; i++) par[i] = i, depth[i] = 0;
}

int find(int x){
  
  if(par[x] == x) return x;
  else return par[x] = find(par[x]);

}

void unite(int x, int y){
  
  x = find(x), y = find(y);
  if(x == y) return;
  if(depth[x] < depth[y]) par[x] = y;
  else{
    par[y] = x;
    if(depth[x] == depth[y]) depth[x]++;
  }

}

int same(int x, int y){
  
  return (find(x) == find(y));
}

int main(){

  int n, q;
  cin >> n >> q;
  init(n);
  
  while(q--){
    int com, x, y;
    cin >> com >> x >> y;
    if(!com) unite(x, y);
    else cout << same(x, y) << endl;
  }

}
    