#include <iostream>
#include <vector>

using namespace std;
const int INF = 1001001001;

void djkstra(const vector< vector< int > >& edges, vector< int >& d, int root)
{
    int n = d.size(), node, min_dist;
    d[root] = 0;
    vector<int> color(n, 0);

    while(true)
    {
        min_dist = INF;
        for(int i=0;i<n;++i)
        {
            if(color[i] == 0 && d[i] < min_dist)
            {
                node = i;
                min_dist = d[i];
            }
        }
        if(min_dist == INF) break;
        color[node] = 1;
        for(int i=0;i<n;++i)
        {
            d[i] = min(d[i], edges[node][i] + d[node]);
        }
    }
}

int main()
{
    int n, k, u, v, c;
    cin >> n;
    vector< vector< int > > edges(n, vector<int>(n, INF));
    vector<int> d(n, INF);
    for(int i=0;i<n;++i)
    {
        cin >> u >> k;
        for(int j=0;j<k;++j)
        {
            cin >> v >> c;
            edges[u][v] = c;
        }
    }

    djkstra(edges, d, 0);
    for(int i=0;i<d.size();++i)
    {
        cout << i << " " << d[i] << endl;
    }
}
