#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int fri[100010];

int find(int x){
  if( fri[x] == x ) return x;
  else return fri[x] = find(fri[x]);
}

void uf_union(int x, int y){
  x = find(x);
  y = find(y);
  fri[x] = y;
}

int main(){

  int n,m,q;
  cin >> n >> m;

  // init
  for(int i=0; i<n; i++) fri[i] = i;

  //
  for(int i=0; i<m; i++){
    int u,v; scanf("%d %d",&u,&v);
    uf_union(u,v);
  }

  cin >> q;
  for(int i=0; i<q; i++){
    int u,v; scanf("%d %d",&u,&v);
    if( find(u) == find(v) ) printf("yes\n");
    else printf("no\n");
  }


}