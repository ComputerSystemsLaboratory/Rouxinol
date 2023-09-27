#include <iostream>
#include <cstdio>
using namespace std;
static const int  N = 100;
static const int  INFTY = (1<<21);
int M[N][N], color[N];
int n, d[N], p[N];
int ans = 0;

int prim()
{
    for (int i = 0; i < n; i++)
    {
        color[i] = -1;
        d[i] = INFTY;
        p[i] = -1;
    } 
    d[0] = 0;
    int u = -1;
    while (true)
    { 
        int mincost = INFTY;
        u = -1;
        for (int i = 0; i < n; i++)
        {
            if (color[i] != 2 && d[i] < mincost)
            { 
                mincost = d[i];
                u = i;
            }  
        } 

        if (mincost == INFTY) break;
        color[u] = 2;
        for (int i = 0; i < n; i++)
        {
            if (color[i] != 2 && M[u][i] != INFTY)
            { 
                if (M[u][i] < d[i])
                { 
                    d[i] = M[u][i];
                    p[i] = u;
                    color[i] = 1;
                }  
            }  
        } 
    }

    for (int i = 0; i < n; i++)
    {
        if (color[i] == 2 && p[i] != -1) ans += M[i][p[i]];

    } 
    return ans;
}

int main()
{
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int a;
            cin>>a;
            if(a != -1) M[i][j] = a;
            else M[i][j] = INFTY;
        }  
    } 
    prim();
    cout<<ans<<endl;    
    return 0;
}