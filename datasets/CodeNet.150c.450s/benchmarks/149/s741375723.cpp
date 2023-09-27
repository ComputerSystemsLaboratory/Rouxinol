#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

#define rep(i,j) REP((i), 0, (j))
#define REP(i,j,k) for(int i=(j);(i)<(k);++i)
#define BW(a,x,b) ((a)<=(x)&&(x)<=(b))
#define ALL(v) (v).begin(), (v).end()
#define LENGTHOF(x) (sizeof(x) / sizeof(*(x)))
#define AFILL(a, b) fill((int*)a, (int*)(a + LENGTHOF(a)), b)
#define SQ(x) ((x)*(x))
#define Mod(x, mod) (((x)+(mod)%(mod))
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define INF 1 << 30
#define EPS 1e-10
#define MOD 1000000007

typedef pair<int, int> pi;
typedef pair<int, pi> pii;
typedef vector<int> vi;
typedef queue<int> qi;
typedef long long ll;

struct UF{
  int par[10001];
  int rank[10001];

  UF(int n){ init(n); }
  void init(int n){
    for(int i=0;i<n;i++){
      par[i] = i;
      rank[i] = 0;
    }
  }

  int find(int x){
    if(par[x] == x) return x;
    else return par[x] = find(par[x]);
  }

  void unite(int x, int y){
    x = find(x);
    y = find(y);
    if(x == y) return;
    if(rank[x] < rank[y]){
      par[x] = y;
    }else{
      par[y] = x;
      if(rank[x] == rank[y]) rank[x]++;
    }
  }

  int same(int x,int y){
    return find(x) == find(y);
  }
};

int main(){
  int n ,q;
  scanf("%d%d", &n, &q);
  UF uf(n);

  rep(i, q){
    int com, x, y;
    scanf("%d%d%d", &com, &x, &y);
    if(com){
      printf("%d\n", uf.same(x, y)?1:0);
    }else{
      uf.unite(x, y);
    }
  }
  
  return 0;
}