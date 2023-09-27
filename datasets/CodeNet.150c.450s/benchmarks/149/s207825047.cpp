#include <iostream>
#define MAX 200001
using namespace std;

// Rank: height
// p   : parent
int Rank[MAX], p[MAX];
void DisjointSet(int size);
void makeSet(int x);
bool same(int x, int y);
void unite(int x, int y);
void link(int x, int y);
int findSet(int x);



int main() {
    int n, q;
    int t, a, b;
    cin >> n >> q;

    DisjointSet(n);

    for (int i = 0; i < q; i++) {
        cin >> t >> a >> b;
        if (t == 0) {
            unite(a, b);
        }
        else if (t == 1) {
            if (same(a, b)) cout << 1 << '\n';
            else cout << 0 << '\n';
        }
    }
}

void DisjointSet(int size) {
    for (int i = 0; i < size; i++) 
        makeSet(i);
}

void makeSet(int x) {
    p[x] = x;
    Rank[x] = 0;
}

bool same(int x, int y) {
    return findSet(x) == findSet(y);
}

void unite(int x, int y) {
    link(findSet(x), findSet(y));
}

void link(int x, int y) {
    if ( Rank[x] > Rank[y] ) {
        p[y] = x;
    }
    else {
        p[x] = y;
        if ( Rank[x] == Rank[y] ) {
            Rank[y]++;
        }
    }
}

int findSet(int x) {
    if ( x != p[x] ) {
        p[x] = findSet(p[x]);
    }
    return p[x];
}

