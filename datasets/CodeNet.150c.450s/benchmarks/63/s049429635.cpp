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

void dijkstra(int s)
{
    priority_queue<P, vector<P>, greater<P>> que;
    fill(dist, dist + V, llINF);
    dist[s] = 0;
    que.push(P(0, s));

    while(!que.empty())
    {
        P p = que.top(); que.pop();
        int v = p.second;
        if(dist[v] < p.first)   
            continue;
        for(auto e : graph[v])
        {
            if(dist[e.to] > dist[v] + e.cost)
            {
                dist[e.to] = dist[v] + e.cost;
                que.push(P(dist[e.to], e.to));
            }
        }
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

    dijkstra(start);

    rep(i, V)
    {
        if (dist[i] != llINF)
            cout << dist[i] << endl;
        else 
            cout << "INF" << endl;
    }
    return 0;
}
