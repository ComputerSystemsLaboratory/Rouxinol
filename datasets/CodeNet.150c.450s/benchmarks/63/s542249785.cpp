#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
#include <numeric>
#include <cstring>
#include <cmath>
#include <set>
#include <queue>
#include <stack>

const int MOD = 1e9 + 7;
const int iINF = 100000000;
const long long int llINF = 1 << 30;
#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;
using ll = long long int;
using P = pair<int, int>;
using edge = struct
{
    int to;
    int cost;
};

vector<edge> graph[1000000];
ll dist[1000000];

int V, E, start;

void bellman(int s)
{
    rep(i, V) dist[i] = llINF;
    dist[s] = 0;
    while (true)
    {
        bool update = false;
        rep(i, E)
        {
            for (auto e : graph[i])
            {
                if (dist[i] != llINF && dist[e.to] > dist[i] + e.cost)
                {
                    dist[e.to] = dist[i] + e.cost;
                    update = true;
                }
            }
        }

        if (!update)
            break;
    }
}

int main()
{

    cin >> V >> E >> start;
    rep(i, E)
    {
        int a, t, d;
        cin >> a >> t >> d;
        graph[a].push_back({t, d});
    }

    bellman(start);

    rep(i, V)
    {
        if (dist[i] != llINF)
            cout << dist[i] << endl;
        else 
            cout << "INF" << endl;
    }
    return 0;
}
