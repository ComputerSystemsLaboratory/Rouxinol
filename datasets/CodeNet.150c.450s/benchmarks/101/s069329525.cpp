#include "bits/stdc++.h"

using namespace std;

class UnionFind
{
    vector<int> par;

public:
    UnionFind(int n) : par(n, -1) {}

    int root(int x)
    {
        if (par[x] < 0)
            return x;
        else
            return par[x] = root(par[x]);
    }

    bool merge(int x, int y)
    {
        x = root(x);
        y = root(y);
        if (x == y)
            return false;
        if (par[x] > par[y])
            swap(x, y);
        par[x] += par[y];
        par[y] = x;
        return true;
    }

    int size(int x) { return -par[root(x)]; }
};

void solve()
{
    int n, m, q;
    cin >> n >> m;
    UnionFind uf(n);
    while (m--)
    {
        int s, t;
        cin >> s >> t;
        uf.merge(s, t);
    }
    cin >> q;
    while (q--)
    {
        int s, t;
        cin >> s >> t;
        if (uf.root(s) == uf.root(t))
        {
            cout << "yes\n";
        }
        else
        {
            cout << "no\n";
        }
    }
}

int main()
{
    solve();
    return 0;
}

