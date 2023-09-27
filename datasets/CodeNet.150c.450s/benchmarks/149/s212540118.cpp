#include <iostream>

using namespace std;

template<int SIZE>
class DisjointSetsForests {
    int p[SIZE];
    int rank[SIZE];
public:
    void MakeSet(int x) { p[x] = x; rank[x] = 0; }
    void Union(int x, int y) { Link( FindSet(x), FindSet(y) ); }
    int FindSet(int x) {
        if (x != p[x]) p[x] = FindSet( p[x] );
        return p[x];
    }
    bool IsSameSet(int x, int y) { return FindSet(x) == FindSet(y); }
    void Link(int x, int y) {
        if (rank[x] > rank[y]) p[y] = x;
        else {
            p[x] = y;
            if (rank[x] == rank[y]) rank[y]++;
        }
    }
};
typedef DisjointSetsForests<10000> UnionFind;



int main() {
    int n, q;
    cin >> n >> q;
    UnionFind uf;
    for (int i = 0; i < n; i++) {
        uf.MakeSet(i);
    }
    for (int i = 0; i < q; i++) {
        int com, x, y;
        cin >> com >> x >> y;
        if (com == 0) {
            uf.Union(x, y);
        } else {
            if (uf.IsSameSet(x, y)) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}