#include "bits/stdc++.h"
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

using ll = long long;

const int MAX_N = 100010;
int par[MAX_N];
int rnk[MAX_N];
int siz[MAX_N];

void init(int n) {
    rep(i,n) {
        par[i] = i;
        rnk[i] = 0;
        siz[i] = 1;
    }
}

int find(int x) {
    if (par[x] == x) {
        return x;
    } else {
        return par[x] = find(par[x]);
    }
}

void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) return;
    int s = siz[x] + siz[y];
    if (rnk[x] < rnk[y]) {
        par[x] = y;
    } else {
        par[y] = x;
        if (rnk[x] == rnk[y]) rnk[x]++;
    }
    siz[find(x)] = s;
}

bool same(int x, int y) {
    return find(x) == find(y);
}

int size(int x) {
    return siz[find(x)];
}

int main() {
    int V, E, s, t, w;
    cin >> V >> E;
    vector<tuple<int, int, int>> v;
    rep(i, E) {
        cin >> s >> t >> w;
        v.emplace_back(w, s, t);
    }
    sort(v.begin(), v.end());
    /*
    rep(i, E) {
        cout << get<0>(v[i]) << get<1>(v[i]) << get<2>(v[i]) << "\n";
    }
    */
    init(V);
    int ans = 0;
    rep(i, E) {
        int a = get<0>(v[i]), b = get<1>(v[i]), c = get<2>(v[i]);
        if (same(b, c)) continue;
        ans += a;
        unite(b, c);
    }
    cout << ans << "\n";
}
