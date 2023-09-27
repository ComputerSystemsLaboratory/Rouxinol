#include<iostream>
#include<algorithm>
#include<climits>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<string>
#include<cstring>
#include<vector>
#include<stack>
#include<queue>
#include<set>
#include<map>
#include<bitset>

using namespace std;

#define rep(i, n) for(i = 0;i < n;++i)
#define int2(x, y) int x, y; scanf("%d%d",&x, &y)
#define int3(x, y, z) int x, y, z; scanf("%d%d%d",&x, &y, &z)
#define pb push_back
#define mp make_pair
#define all(a) (a).begin(),(a).end()

struct rsqsegtree{
  vector<int> t;
  int re;
  int n;
  void use(int N){
    re = 0; n = N;
    int i, j;
    for(i = 0;;++i)if((1 << i) >= n)break;
    ++i; t.resize(1 << i); t[0] = 1 << i;
    for(i = 1;i < t[0];++i)t[i] = re;
    t[0] >>= 1;
    return;
  }
  void update(int at, int data){
    t[t[0] + at] += data;
    int tmp;
    for(int x = t[0] + at;x >= 2;x >>= 1)
    t[x >> 1] = (t[(x >> 1) << 1] + t[((x >> 1) << 1) + 1]);
    return;
  }
  int query(int l, int r, int k, int kl, int kr){
    //printf("%d %d %d %d %d\n", l, r, k, kl, kr);
    if(k >= t.size())return re;
    if(kl >= r || kr <= l)return re;
    if(l <= kl && kr <= r)return t[k];
    return query(l, r, k * 2, kl, (kl + kr) >> 1) + query(l, r, k * 2 + 1, (kl + kr) >> 1, kr);
  }
  int getsum(int l, int r){ return query(l, r, 1, 0, t[0]); }
  void deb(void){
    int x = 1;
    t[0] *= 2;
    printf("t[0] : %d\n", t[0]);
    for(int i = 1;i < t[0];++i){
      printf("%11d", t[i]);
      if(i == (1 << x) - 1){ puts(""); ++x; }
    }
    t[0] /= 2;
    return;
  }
};

rsqsegtree ST;

signed main(void){
  int i, j;
  int2(n, q);
  ST.use(n);
  for(;q--;){
    int3(z, x, y);
    if(z == 0)ST.update(x - 1, y);
    else printf("%d\n", ST.getsum(x - 1, y));
    //ST.deb();
  }

  return 0;
}