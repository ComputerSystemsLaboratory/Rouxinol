#include <iostream>
#include <vector>
#include <utility>

template <std::size_t n>
class UnionFindTree
{
public:
    UnionFindTree()
    {
        for (std::size_t i = 0; i < n; i++) {
            parent[i] = i;
            rank[i] = 0;
            size[i] = 1;
        }
    }

    bool same(const std::size_t a, const std::size_t b)
    {
        return find(a) == find(b);
    }

    std::size_t find(const std::size_t a)
    {
        if (parent[a] == a) {
            return a;
        } else {
            return parent[a] = find(parent[a]);
        }
    }

    void unite(const std::size_t a_, const std::size_t b_)
    {
        const std::size_t a = find(a_);
        const std::size_t b = find(b_);
        if (a == b) {
            return;
        }
        if (rank[a] > rank[b]) {
            parent[b] = a;
            size[a] += size[b];
        } else {
            parent[a] = b;
            size[b] += size[a];
        }
        if (rank[a] == rank[b]) {
            rank[b]++;
        }
    }

    std::size_t getSize(const std::size_t a)
    {
        return size[a];
    }

private:
    std::size_t parent[n];
    std::size_t rank[n];
    std::size_t size[n];
};

template <std::size_t m, std::size_t n = m>
class UnionFindTree2D
{
public:
    UnionFindTree2D()
    {
        for (std::size_t i = 0; i < m; i++) {
            for (std::size_t j = 0; j < n; j++) {
                parent[i][j] = std::make_pair(i, j);
                rank[i][j] = 0;
                size[i][j] = 1;
            }
        }
    }

    bool same(const std::pair<std::size_t, std::size_t>& a, const std::pair<std::size_t, std::size_t>& b)
    {
        return find(a) == find(b);
    }

    std::pair<std::size_t, std::size_t> find(const std::pair<std::size_t, std::size_t>& a)
    {
        if (parent[a.first][a.second] == a) {
            return a;
        } else {
            return parent[a.first][a.second] = find(parent[a.first][a.second]);
        }
    }

    void unite(const std::pair<std::size_t, std::size_t>& a_, const std::pair<std::size_t, std::size_t>& b_)
    {
        const std::pair<std::size_t, std::size_t>& a = find(a_);
        const std::pair<std::size_t, std::size_t>& b = find(b_);
        if (a == b) {
            return;
        }
        if (rank[a.first][a.second] > rank[b.first][b.second]) {
            parent[b.first][b.second] = a;
            size[a.first][a.second] += size[b.first][b.second];
        } else {
            parent[a.first][a.second] = b;
            size[b.first][b.second] += size[a.first][a.second];
        }
        if (rank[a.first][a.second] == rank[b.first][b.second]) {
            rank[b.first][b.second]++;
        }
    }

    std::size_t getSize(const std::pair<std::size_t, std::size_t>& a)
    {
        return size[a.first][a.second];
    }

private:
    std::pair<std::size_t, std::size_t> parent[m][n];
    std::size_t rank[m][n];
    std::size_t size[m][n];
};

using namespace std;

int main()
{
    constexpr std::size_t NUM = 10000;
    UnionFindTree<NUM> u;
    std::size_t n, q;
    cin >> n >> q;
    for (std::size_t i = 0; i < q; i++) {
        char c;
        cin >> c;
        if (c == '0') {
            int x, y;
            cin >> x >> y;
            u.unite(x, y);
        } else if (c == '1') {
            int x, y;
            cin >> x >> y;
            cout << (u.same(x, y) ? 1 : 0) << endl;
        } else {
            cerr << "Piyo" << endl;
        }
    }

    return 0;
}