#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <utility>

using vi = std::vector<int>;
using vvi = std::vector<std::vector<int>>;

constexpr int nil = -1;

class Graph
{
public:

    Graph(int n)
        : e(n)
    {}

    void connect(int from, int to, bool isTwoWay = true)
    {
        e[from].push_back(to);
        if (isTwoWay)
            e[to].push_back(from);
    }

    vi getComponentGroup() const
    {
        vi group {vi(e.size(), nil)};
        int id = 0;

        for (int i = 0; i < e.size(); ++i)
        {
            if (group[i] != nil)
                continue;

             grouping(group, i, id++);
        }

        return group;
    }

private:
    vvi e;

    void grouping(vi& group, int vertex, int groupId) const
    {
        if (group[vertex] != nil)
            return;

        group[vertex] = groupId;

        for (auto v : e[vertex])
            grouping(group, v, groupId);
    }
};

void solve()
{
    using namespace std;

    int n, m;
    cin >> n >> m;

    Graph g {n};

    for (int i = 0, v1, v2; i < m; ++i)
    {
        cin >> v1 >> v2;
        g.connect(v1, v2);
    }

    auto group = g.getComponentGroup();

    int q;
    cin >> q;

    for (int i = 0, v1, v2; i < q; ++i)
    {
        cin >> v1 >> v2;
        cout << (group[v1] == group[v2] ? "yes" : "no") << endl;
    }
}

int main()
{
    solve();
    return 0;
}
