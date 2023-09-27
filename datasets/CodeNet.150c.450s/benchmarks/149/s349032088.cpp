#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a; i<n; i++)
using namespace std;

const int S = 10010;
int uf[S];
int find(int a) {
    return (a == uf[a]) ? a : find(uf[a]);
}

void unite(int a, int b) {
    uf[find(a)] = uf[find(b)];
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