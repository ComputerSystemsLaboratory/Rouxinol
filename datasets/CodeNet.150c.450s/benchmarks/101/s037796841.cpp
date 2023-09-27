#include<iostream>
#include<algorithm>
using namespace std;

int n;
int parent[100000];
int r[100000]; //rank

void init(int n){
  for(int i = 0;i < n;i++){
    parent[i] = i;
    r[i] = 0;
  }
}

int find(int x){
  if(parent[x] == x) return x;
  else return parent[x] = find(parent[x]);
}

void unite(int x, int y){
  x = find(x);
  y = find(y);
  
  if(x == y) return ;
  
  if(r[x] < r[y]) parent[x] = y;
  else{
    parent[y] = x;
    if(r[x] == r[y]) r[x]++;
  }
}

bool same(int x, int y){
  return find(x) == find(y);
}

int main(){
  
  int m, q, s, t;
  
  cin >> n >> m;
  init(n);
  for(int i = 0;i < m;i++){
    cin >> s >> t;
    unite(s, t);
  }
  
  cin >> q;
  for(int i = 0;i < q;i++){
    cin >> s >> t;
    if(same(s, t)) cout << "yes" << endl;
    else cout << "no" << endl;
  }
  
  return 0;
}
 

