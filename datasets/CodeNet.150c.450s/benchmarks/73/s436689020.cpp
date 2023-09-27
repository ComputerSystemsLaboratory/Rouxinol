#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <numeric>
#include <cstdlib>
#include <queue>
#include <stack>
using namespace std;

typedef long long ll;
#define pb push_back

#define rep(i, n) for (int i=0;i<(n);++i)
#define rep2(i, s, n) for (int i=s;i<(n);++i)
#define rev(i, n) for (int i=(n);i>0;--i)
#define INF (1e9+1e9)

/* SegTree */
const int N = 1e5;
int t[N<<1];
int n;

void build() {
    rev(i,n-1) t[i] = t[i<<1] + t[i<<1|1];
}
void modify(int p, int value) {
    for(t[p += n] += value; p > 1; p >>= 1) t[p>>1] = t[p] + t[p^1];
}
int query(int l, int r) {
    int res = 0;
    for(l += n, r += n; l < r; l >>= 1, r >>= 1) {
        if (l&1) res += t[l++];
        if (r&1) res += t[--r];
    }
    return res;
}


int main() {
    int Q; cin>>n>>Q;

    rep(i,n) t[n+i] = 0;
    build();
    vector<int> C,X,Y;
    rep(i,Q) {
        int c,x,y; cin>>c>>x>>y;
        C.pb(c); X.pb(x); Y.pb(y);
    }
    rep(i,Q) if (C[i]==0) modify(X[i]-1, Y[i]); else cout << query(X[i]-1, Y[i]) << endl;
}