#include <stdio.h>
#include <vector>

class DisjointSet
{
public:
    std::vector<int> rank, p;

    DisjointSet()
    {}

    DisjointSet(int size)
    {
        rank.resize(size, 0);
        p.resize(size, 0);
        for (int i = 0; i < size; i++) {
            makeSet(i);
        }
    }

    void makeSet(int x)
    {
        p[x] = x;
        rank[x] = 0;
    }

    bool same(int x, int y)
    {
        return findSet(x) == findSet(y);
    }

    void unite(int x, int y)
    {
        link(findSet(x), findSet(y));
    }

    void link(int x, int y)
    {
        if (rank[x] > rank[y]) {
            p[y]  =x;
        } else {
            p[x] = y;
            if (rank[x] == rank[y]) {
                rank[y]++;
            }
        }
    }

    int findSet(int x)
    {
        if (x != p[x]) {
            p[x] = findSet(p[x]);
        }
        return p[x];
    }
};

int main()
{
    int n, a, b, q;
    int t;

    scanf("%d %d", &n, &q);
    DisjointSet ds = DisjointSet(n);

    for (int i = 0; i < q; i++) {
        scanf("%d %d %d", &t, &a, &b);
        if (t == 0) {
            ds.unite(a, b);
        } else if (t == 1) {
            printf("%d\n", ds.same(a, b) ? 1 : 0);
        }
    }
}
