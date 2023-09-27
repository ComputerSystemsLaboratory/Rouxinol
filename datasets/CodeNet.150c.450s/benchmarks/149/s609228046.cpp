#include<cstdio>
#include<algorithm>
using namespace std;
struct UF{
  int a[10001];
  void init(int x){
    for(int i=0;i<x;i++) a[i] = i;
  }
  void unite(int x,int y){
    int ax = find(x);
    int ay = find(y);
    if(ax > ay) a[ax] = ay;
    if(ay > ax) a[ay] = ax;
  }
  int find(int x){
    if(x != a[x]) a[x] = find(a[x]);
    return a[x];
  }
};
int main(){
  int n,q,b,c,d;
  UF uf;
  scanf("%d %d",&n,&q);
  uf.init(n);
  while(q--){
    scanf("%d %d %d",&b,&c,&d);
    if(b == 0) uf.unite(c,d);
    if(b == 1) printf("%d\n",uf.find(c)==uf.find(d));
  }
  return 0;
}