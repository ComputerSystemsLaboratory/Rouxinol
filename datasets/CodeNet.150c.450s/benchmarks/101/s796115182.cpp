#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); ++i)
#define outl(x) cout<< (x) << '\n'
#define fi first
#define se second
using pii = pair<int,int>;
using ll = long long;

struct UnionFind
{
    int uni[100010];
    UnionFind() { memset(uni, -1, sizeof(uni)); }
    int root(int x) { return uni[x] < 0 ? x : uni[x] = root(uni[x]); }
    bool same(int x, int y) { return (root(x) == root(y)); }
    bool unite(int x, int y) {
        if ((x=root(x)) == (y=root(y)))
            return true;
        if (uni[y] < uni[x])
            swap(x, y);

        uni[x] += uni[y];
        uni[y] = x;
        return (false);
    }
};

UnionFind uf;

int main()
{
   cin.tie(0), ios::sync_with_stdio(false);
   int N, Q, m;

   cin >> N >> m;

   while (m--) {
       int x, y;
       cin >> x >> y;
       uf.unite(x, y);
   }

   cin >> Q;
   while (Q--) {
       int x, y;
       cin >> x >> y;
       outl(uf.same(x,y) ? "yes" : "no");
   }

}


