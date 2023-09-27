#include <iostream>
#include <vector>
#include <stack>
#define Max 100000
using namespace std;
int n,x;
vector<int>G[Max];
int flag[Max];
int color[Max];

int dfs(int s)
{
    stack<int>S;
    int i;
    S.push(s);
    color[s]=x;
    while(!S.empty()){
        int u=S.top();
        for(i=0;i<G[u].size();i++)
        {
            if(!flag[G[u][i]])
            {
                //if(G[u][i]==t)return 1;
                flag[G[u][i]]=1;
                color[G[u][i]]=x;
                S.push(G[u][i]);
                break;
            }
        }
        if(i>=G[u].size())
            S.pop();
    }
    return 0;
}
int main()
{
    int m,u,v,q;
    cin>>n>>m;
    x=0;
    for(int i=0;i<n;i++)
        color[i]=x;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    for(int i=0;i<n;i++)
    {
        if(!flag[i])
        {
            x++;
            dfs(i);
        }
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>u>>v;
        if(color[u]==color[v])cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
