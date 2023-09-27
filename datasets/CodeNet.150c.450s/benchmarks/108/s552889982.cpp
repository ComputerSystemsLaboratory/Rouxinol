#include <iostream>
#include <queue>
using namespace std;

int n;
int d[101];
bool a[101][101];
const int INF = (1<<21);

void bfs(int s)
{
    queue<int> q;
    q.push(s);
    for(int i=0; i<n; i++) d[i] = INF;
    d[s] = 0;
    
    int u;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int v=0; v<n; v++)
        {
            if(a[u][v] && d[v] == INF)
            {
                d[v] = d[u] + 1;
                q.push(v);
            }
        }
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            a[i][j] = false;
        }
    }

    for(int i=0; i<n; i++)
    {
        int u, k;
        cin >> u >> k;
        for(int j=0; j<k; j++)
        {
            int v;
            cin >> v;
            a[u-1][v-1] = true;
        }
    }
    
    bfs(0);

    for(int i=0; i<n; i++)
    {
        cout << i+1 << " " << ((d[i] == INF) ? (-1) : d[i]) << endl;
    }
    return 0;
}