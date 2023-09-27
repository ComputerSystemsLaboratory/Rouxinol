#include <algorithm>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <queue>
#include <stack>
#include <utility>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

namespace UF {

const int MAX_N = 100000;
int parent[MAX_N];
int rank[MAX_N];

void initialize(int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = i;
        rank[i]   = 0;
    }
}

int find(int x) {
    if (parent[x] == x) {
        return x;
    } else {
        return parent[x] = find(parent[x]);
    }
}

void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y)
        return;

    if (rank[x] < rank[y]) {
        parent[x] = y;
    } else {
        parent[y] = x;
    }
    if (rank[x] == rank[y])
        rank[x]++;
}

bool is_same(int x, int y) {
    return find(x) == find(y);
}

} // namespace UF

// verify code

int main(void) {
    int n, q;
    cin >> n >> q;
    UF::initialize(n);
    for (int i = 0; i < q; i++) {
        int c, x, y;
        cin >> c >> x >> y;
        if (c == 0) {
            UF::unite(x, y);
        } else {
            cout << UF::is_same(x, y) << endl;
        }
    }
    return 0;
}

