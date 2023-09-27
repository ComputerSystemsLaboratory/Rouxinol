#include <iostream>
#include <queue> 
using namespace std;
int G[100][100];
int d[100];
int color[100];
int n;
queue<int> qu;
void bfs ()
{
    color[0] = 1;
    d[0] = 0;
    qu.push(0);
    while (!qu.empty())
    { 
        int u = qu.front(); qu.pop();
        for (int i = 0; i < n; i++)
        {
            if (G[u][i] == 1 && color[i] == 0)
            {
                color[i] = 1;
                d[i] = d[u] + 1;
                qu.push(i);
            }
        }
        color[u] = 2;
    } 
    return;
}

int main()
{
    int k, u, v;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            G[i][j] = 0; 
        }  
    } 

    for (int i = 0; i < n; i++)
    {   
        cin>>u>>k;
        for (int j = 0; j < k; j++)
        {
            cin>>v;
            G[u-1][v-1] = 1;
        } 
    }

    for (int i = 0; i < n; i++)
    {
        d[i] = -1; 
        color[i] = 0;
    } 
    bfs();
    for (int i = 0; i < n; i++)
    {
         cout<< i+1<<" "<<d[i]<<endl;
    } 
    return 0;
}