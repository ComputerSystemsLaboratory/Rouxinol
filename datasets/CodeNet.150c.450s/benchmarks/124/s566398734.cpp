#include <iostream>
#include <cstdio> 
using namespace std;
static const int INFTY = (1<<21);
int n, M[100][100];
int color[100],d[100],p[100];

void dijkstra()
{
    for (int i = 0; i < n; i++)
    {
        d[i] = INFTY;
        p[i] = -1;
        color[i] = 0;
    } 
    
    d[0] = 0;

    while (true)
    { 
        int mincost = INFTY;
        int u = -1;
        for (int i = 0; i < n; i++)
        {
            if (color[i] != 2 && d[i] < mincost )
            { 
                mincost = d[i];
                u = i;
            }         
        } 
        if (mincost == INFTY) break;
        color[u] = 2;
        for (int v = 0; v < n; v++)
        {
            if (color[v] != 2 && d[u] + M[u][v] < d[v])
            { 
                d[v] = d[u] + M[u][v];
                p[v] = u;
                color[v] = 1;
            }  
        } 
    } 

}

int main()
{
    //freopen("in3.txt","r",stdin);
    int u,k,v,c;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            M[i][j] = INFTY; 
        }  
    } 
    for (int i = 0; i < n; i++)
    {
        cin>>u>>k;
        for (int j = 0; j < k; j++)
        {
            cin>>v>>c; 
            M[u][v] = c; 
        } 
    } 
    
    dijkstra();

    for (int i = 0; i < n; i++)
    {
        cout<<i<<" "<<d[i]<<endl; 
    } 
    
    return 0;
}