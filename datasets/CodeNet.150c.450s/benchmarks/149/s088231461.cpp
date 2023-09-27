#include<bits/stdc++.h>

using namespace std;

int par[10001];

int root(int x) {
    if (par[x] == x) {
        return x;
    }
    else {
        return par[x] = root(par[x]);
    }
}

bool same(int x, int y) {
    return root(x) == root(y);
}

void unit(int x, int y) {
    int root_x = root(x);
    int root_y = root(y);
    par[root_x] = root_y;
}

int main()
{

    for (int i = 0; i < 10000; i++) {
        par[i] = i;
    }
    int n, q;
    cin >> n >> q;

    for (int i = 0; i < q; i++) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0) {
            unit(x, y);
        }
        else {
            cout << (same(x, y) ? 1 : 0) << endl;
        }
    }


    return 0;
}