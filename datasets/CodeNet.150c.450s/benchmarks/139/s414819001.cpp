#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifdef TarekHasan
        freopen("input.txt","r",stdin);
    #endif // TarekHasan

    int v,e; cin >> v >> e;
    unordered_map< int , vector< int > > adjacentList;
    for(int i=0;i<e;i++)
    {
        int u,v; cin >> u >> v;
        adjacentList[u].push_back(v);
        adjacentList[v].push_back(u);
    }
    int parent[v+1];
    int visited[v+1];

    for(int i=1;i<=v;i++)
    {
        parent[i]=-1;
        visited[i]=0;
    }

    queue< int > q;
    q.push(1);
    visited[1]=1;
    parent[1]=1;

    while(!q.empty())
    {
        int top = q.front();
        q.pop();

        for(int x : adjacentList[top])
        {
            if(visited[x]==0)
            {
                visited[x]=1;
                parent[x]=top;
                q.push(x);
            }
        }
    }

    bool possible = true;

    for(int i=2;i<=v;i++)
    {
        if(parent[i]==-1)
        {
            possible = false;
            break;
        }
    }

    if(possible)
    {
        cout << "Yes\n";
        for(int i=2;i<=v;i++)
            cout << parent[i] << endl;
    }
    else
        cout << "No\n";
    return 0;
}
