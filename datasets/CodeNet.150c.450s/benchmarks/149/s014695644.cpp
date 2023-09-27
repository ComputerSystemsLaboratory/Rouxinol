#include<iostream>
 
using namespace std;

int par[100000];

void init(int n){
  for(int i=0; i<n; i++) par[i] = i;
}
 
int root(int x){
  if(par[x] == x){
    return x;
  }else{
    return par[x] = root(par[x]);
  }
}
 
bool same(int x, int y){
  return root(x) == root(y);
}
	
void unite(int x, int y){
  x = root(x);
  y = root(y);
  if(x == y) return;
  
  par[x] = y;
}

int main()
{
  int n,q;
  cin >> n >> q;
  int p, a, b;
  init(n);
  for(int i=0; i<q; i++){
    cin >> p >> a >> b;
    if(p == 0) unite(a,b);
    else cout << (same(a, b) ? "1" : "0") << endl;
  }
  
  return 0;
}

