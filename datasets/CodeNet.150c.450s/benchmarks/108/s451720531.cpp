#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <utility>

using vvi = std::vector<std::vector<int>>;

std::vector<int> DistanseFrom(const vvi& edges, int from)
{
    using namespace std;
    constexpr int nil = -1;

    int nextDist {};
    const int n = edges.size();
    queue<int> currentQ;
    queue<int> nextQ;
    vector<int> distances(n, nil);

    nextQ.push(from);
    distances[from] = nextDist;
    ++nextDist;

    while (!nextQ.empty())
    {
        currentQ = nextQ;
        nextQ = queue<int>();
        
        while (!currentQ.empty())
        {
            int c = currentQ.front();
            currentQ.pop();

            for (const auto& e : edges[c])
            {
                if (distances[e] == nil)
                {
                    nextQ.push(e);
                    distances[e] = nextDist;
                }
            }
        }
        
        ++nextDist;
    }

    return distances;
}

void solve()
{
    using namespace std;

    int n;
    cin >> n;

    //隣接リスト形式(1オリジン)
    vvi edges(n + 1);

    //読み込み
    for (int i = 1; i <= n; ++i)
    {
        int u, k;
        cin >> u >> k;

        edges[u] = vector<int>(k);

        for (int j = 0; j < k; ++j)
        {
            cin >> edges[u][j];
        }
    }

    auto dist = DistanseFrom(edges, 1);

    for (int i = 1; i <= n; ++i)
    {
        cout << i << " " << dist[i] << endl;
    }
}

int main()
{
    solve();
    return 0;
}
