#include <iostream>
#define MAX 100
#define INF (1<<21)
#define WHITE 0
#define GRAY  1
#define BLACK 2 
using namespace std;

int n, adj_M[MAX][MAX];

void Dijkstra()
{
    int next, min_cost;
    int min_dist[n+1], color[n+1], parent[n+1];

    for (int i = 0; i < n; ++i) 
    {
        color[i]  = WHITE;
        parent[i] = -1;
        min_dist[i] = INF;
    }

    min_dist[0] = 0;

    while (true) 
    {
        min_cost = INF;
        next = -1;
        for (int i = 0; i < n; ++i) 
        {
            if (color[i] != BLACK && min_dist[i] < min_cost) 
            {
                min_cost = min_dist[i];
                next = i;
            }
        }
        if (next == -1) break;
        color[next] = BLACK;

        for (int i = 0; i < n; ++i) 
        {
            if (color[i] != BLACK && adj_M[next][i] != INF)
            {
                if (min_dist[next] + adj_M[next][i] < min_dist[i])
                {
                    color[i] = GRAY;
                    min_dist[i] = min_dist[next] + adj_M[next][i];
                    parent[i] = next;
                }
            }
        }
    }

    for (int i = 0; i < n; ++i) 
    {
        cout << i << ' ' << min_dist[i] << endl;
    }
}

int main() 
{
    int id, deg, n_id, n_w;
    cin >> n; 

    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < n; ++j) 
        {
            adj_M[i][j] = INF;
        }
    }

    for (int i = 0; i < n; ++i) 
    {
        cin >> id >> deg;
        for (int j = 0; j < deg; ++j) 
        {
            cin >> n_id >> n_w;
            adj_M[id][n_id] = n_w;
        }
    }

    Dijkstra();
}
