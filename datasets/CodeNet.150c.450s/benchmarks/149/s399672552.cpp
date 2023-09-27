//Disjoint Set: Union Find Tree
#include <iostream>
#include <vector>

using namespace std;

static const int N = 10000;

class DisjointSet {
public:
    vector<int> rank, p;
    DisjointSet(int size);
    void makeSet(int x);
    void unite(int x, int y);
    void link(int x, int y);
    int findSet(int x);
};

DisjointSet::DisjointSet(int size) {
    rank.resize(size, 0);
    p.resize(size, 0);
    for(int i = 0; i < size; i++) makeSet(i);
}

void DisjointSet::makeSet(int x) {
    p[x] = x;
    rank[x] = 0;
}

void DisjointSet::unite(int x, int y) {
    link(findSet(x), findSet(y));
}

void DisjointSet::link(int x, int y) {
    if(rank[x] > rank[y]) {
        p[y] = x;
    } else {
        p[x] = y;
        if(rank[x] == rank[y]) rank[y]++;
    }
}

int DisjointSet::findSet(int x) {
    if(x != p[x]) {
        p[x] = findSet(p[x]);
    }
    return p[x];
}

int main() {
    int n, q, com, x, y;
    cin >> n >> q;
    DisjointSet S(n);
    for(int i = 0; i < q; i++) {
        cin >> com >> x >> y;
        if(com == 0) S.unite(x, y);
        else if(com == 1) {
            if(S.findSet(x) == S.findSet(y)) cout << 1 << endl;
            else cout << 0 << endl;
        }
    }
}
