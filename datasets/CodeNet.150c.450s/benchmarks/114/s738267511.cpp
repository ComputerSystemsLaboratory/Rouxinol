#include <iostream>
using namespace std;
static const int MAX = 100;
static const int INFTY = (1<<21);

int n, M[MAX][MAX];

int prim()
{
    int u, minv;
    int d[MAX], p[MAX], color[MAX];

    for(int i=0; i<n; i++)
    {
        d[i] = INFTY;
        p[i] = -1;
        color[i] = 0;
    }
    d[0] = 0;
    
    while(true)
    {
        minv = INFTY;
        u = -1;
        for(int i=0; i<n; i++)
        {
            if(minv > d[i] && color[i] != 2)
            {
                u = i;
                minv = d[i];
            }
        }
        if(u == -1) break;
        color[u] = 2;
        for(int v=0; v<n; v++)
        {
            if(color[v] != 2 && M[u][v] != INFTY)
            {
                if(d[v] > M[u][v])
                {
                    d[v] = M[u][v];
                    p[v] = u;
                    color[v] = 1;
                }
            }
        }
    }
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        if(p[i] != -1) sum += M[i][p[i]];
    }
    return sum;
}

int main() 
{
    ios::sync_with_stdio(false);
    
    cin >> n;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int e;
            cin >> e;
            M[i][j] = (e == -1) ? INFTY : e;
        }
    }
    
    cout << prim() << endl;

    return 0;
}