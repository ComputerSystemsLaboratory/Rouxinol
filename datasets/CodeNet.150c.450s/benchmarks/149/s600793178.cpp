#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <cstdio>
#include <ctime>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <numeric>
#include <string>

using namespace std;

class union_find_tree
{
    private:
        int *par;
        int *rank;
    public:
        union_find_tree(int n);
        int root(int x);
        void unite(int x, int y);
        bool same(int x, int y);
};

union_find_tree::union_find_tree(int n)
{
    par = new int[n];
    rank = new int[n];
    for (int i = 0; i < n; i++) {
        par[i] = i;
        rank[i] = 0;
    }
}

int union_find_tree::root(int x)
{
    if (par[x] == x) {
        return x;
    } else {
        return par[x] = root(par[x]);
    }
}

void union_find_tree::unite(int x, int y)
{
    x = root(x);
    y = root(y);
    if (x == y) {
        return;
    }
    if (rank[x] < rank[y]) {
        par[x] = y;
    } else {
        par[y] = x;
        if (rank[x] == rank[y]) {
            rank[x]++;
        }
    }
}

bool union_find_tree::same(int x, int y) {
    return root(x) == root(y);
}

int main(void)
{
    int n, q;
    cin >> n >> q;
    union_find_tree uft(n);
    while (q--) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0) {
            uft.unite(x, y);
        } else {
            cout << uft.same(x, y) << endl;
        }
    }
    return 0;
}