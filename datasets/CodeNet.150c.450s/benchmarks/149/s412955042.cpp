#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a; i<n; i++)
using namespace std;

const int S = 10010;
int uf[S];

int find(int a) {
    if(a == uf[a]) return a;
    return find(uf[a]);
}

void unite(int a, int b) {
    int fa = find(a), fb = find(b);
    if(fa == fb) return;
    uf[fa] = uf[fb];
}

int main() {
    rep(i,0,S) uf[i] = i;
    int n, q; cin >> n >> q;
    rep(i,0,q) {
        int c, x, y; cin >> c >> x >> y;
        if(c == 0) unite(x, y);
        else if(c == 1) cout << (find(x) == find(y)) << endl;
    }
    return 0;
}