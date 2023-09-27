#include<iostream>
#include<vector>
#include<queue>

using namespace std;
queue<int>q;
vector<int>E[100005];
int d[100005],v[100005],n;
int id;
void bfs(int s,int id)
{
    d[s]=id;
    v[s]=true;
    q.push(s);
    while(!q.empty())
    {
        int u=q.front();q.pop();
        for(auto i:E[u])
        {
            if(!v[i])
            {
                v[i]=true;
                d[i]=id;
                q.push(i);
            }
        }
    }
}
int main()
{
    int m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int s,t;
        cin>>s>>t;
        E[s].push_back(t);
        E[t].push_back(s);
    }
    int q;cin>>q;
    id=1;
    for(int i=1;i<=n;i++)d[i]=-1;
    for(int i=1;i<=n;i++)
        if(d[i]==-1)
        bfs(i,id++);
    for(int i=0;i<q;i++)
    {
        int s,t;
        cin>>s>>t;
        if(d[s]==d[t])cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}

