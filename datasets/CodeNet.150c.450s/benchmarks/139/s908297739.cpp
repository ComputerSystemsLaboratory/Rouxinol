#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> sign(n+1,-1);
    vector<vector<int>> edges(n+1);
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }
    vector<bool> visited(n+1);
    queue<int> q;
    q.push(1);
    visited[1] = true;
    while(!q.empty())
    {
        int curr = q.front();
        q.pop();
        for(int i=0;i<edges[curr].size();i++)
        {
            int child = edges[curr][i];
            if(!visited[child])
            {
                q.push(child);
                visited[child]=true;
                sign[child] = curr;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(sign[i]==-1)
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    for(int i=2;i<=n;i++)
    {
        cout<<sign[i]<<endl;
    }
}
