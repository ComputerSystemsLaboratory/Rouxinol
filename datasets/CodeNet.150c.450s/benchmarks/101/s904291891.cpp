#include<cstdio>
#include<iostream>
#include<stack>
#include<cstring>
#include<vector>
using namespace std;
const int MAXN = 1e5+10 ;

vector<int> s[MAXN];
int color[MAXN],n,m;

void dfs(int x,int id)
{
    stack<int> st;
    color[x] = id;
    st.push(x);
    while(!st.empty())
    {
        int u = st.top();   st.pop();
        for(int i = 0; i < s[u].size(); ++i)
        {
            int v = s[u][i];
            if(color[v] == -1)
            {
                color[v] = id;
                st.push(v);
            }
        }
    }
}
void init()
{
    int id = 0;
    memset(color,-1,sizeof color);
    for(int i = 0; i < n; ++i)
    {
        if(color[i] == -1)
            dfs(i,++id);
    }
}

int main(void)
{
    cin>>n>>m;
    int u,v;
    for(int i = 1; i <= m; ++i)
    {
        cin>>u>>v;
        s[u].push_back(v);
        s[v].push_back(u);
    }
    init();
    int q;
    cin>>q;
    while(q--)
    {
        cin>>u>>v;
        if(color[u] == color[v])
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}

