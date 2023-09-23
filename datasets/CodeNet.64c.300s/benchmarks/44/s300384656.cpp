#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
const int maxv = 11;

int d[maxv][maxv];
int V;     //?点数
int x[maxv];     //以x[i]?起点?最短路?之和

void warshall_floyd()
{
    for(int k=0; k<V; k++)
        for(int i=0; i<V; i++)
            for(int j=0; j<V; j++)
                d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
}

int main()
{
    int E;
    while(scanf("%d", &E)==1 && E)
    {
        memset(d, 0x3f, sizeof(d));
        for(int i=0; i<maxv; i++)
            d[i][i] = 0;
        V = 0;
        for(int i=0; i<E; i++)
        {
            int u, v, cost;
            scanf("%d%d%d", &u, &v, &cost);
            d[u][v] = cost;
            d[v][u] = cost;
            V = max(V, max(v, u)+1);
        }
        warshall_floyd();
        memset(x, 0, sizeof(x));
        for(int i=0; i<V; i++)
        {
            for(int j=0; j<V; j++)
                x[i] += d[i][j];
        }
        int ans = min_element(x, x + V) - x;
        cout << ans << ' ' << x[ans] << endl;
    }
    return 0;
}