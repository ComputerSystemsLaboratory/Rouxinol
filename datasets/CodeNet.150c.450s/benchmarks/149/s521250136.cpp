#include <bits/stdc++.h>

using namespace std;

int par[10000];

void init(int n) {
    for(int i = 0; i < n; ++i) {
        par[i] = i;
    }
}

int find(int x) {
    if(par[x] == x) {
        return x;
    } else {
        return par[x] = find(par[x]);
    }
}

bool same(int x, int y) {
    return find(x) == find(y);
}

void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if(x != y) par[x] = y;
}

int main() {

    int n, q, com, x, y;

    cin >> n >> q;

    init(n);

    for(int i = 0; i < q; ++i) {
        cin >> com >> x >> y;
        if(com == 0) {
            unite(x, y);
        } else {
            if(same(x, y) == true) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }

}