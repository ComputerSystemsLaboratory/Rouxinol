#include <bits/stdc++.h>
using namespace std;
int par[10009];
int root(int x) {
    if(par[x]== x) return x;
    return par[x] = root(par[x]);
}
void unite(int x, int y) {
    x = root(x); y = root(y);
    if(x == y) return;
    par[x] = y;
}
bool same(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    return rx == ry;
}
int n, q, tp, x, y;
int main() {
    scanf("%d%d", &n, &q);
    for(int i = 0; i < n; i++) par[i] = i;
    while(q--) {
        scanf("%d%d%d", &tp, &x, &y);
        if(tp == 0) unite(x, y);
        else {
            bool ret = same(x, y);
            puts(ret ? "1" : "0");
        }
    }
    return 0;
}