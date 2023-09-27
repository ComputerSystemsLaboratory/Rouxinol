#include <stdio.h>
#include <stack>
#include <vector> 
#include <iostream>
#define N 100000
using namespace std;

vector<int>  G[N];
int color[N];
int n;

void dfs(int s, int c)
{
    stack<int> st;
    color[s] = c;
    st.push(s);
    while(!st.empty())
    {
        int u = st.top();
        st.pop();
        for (int i = 0; i < G[u].size(); i++)
        {
            int v = G[u][i];
            if(color[v] == -1)
            {
                color[v] = c;
                st.push(v);
            }
        } 
    }
    return;
}

void assignColor()
{
    int id = 1;
    for (int i = 0; i < n; i++)
    {
        color[i] = -1;
    } 
    for (int u = 0; u < n; ++u)
    {
        if(color[u]==-1) dfs(u, id++);
    }

    return;
}

int main()
{
    //freopen("in3.txt","r",stdin);
    int m;
    scanf("%d %d",&n, &m);

    for (int i = 0; i < m; i++)
    {
        int s, t;
        scanf("%d %d",&s,&t); 
        G[s].push_back(t);
        G[t].push_back(s);
    } 

    assignColor(); 

    int q,s,t;
    scanf("%d",&q);
    for (int i = 0; i < q; i++)
    {
        scanf("%d %d",&s,&t);
        if (color[s] == color[t])
        { 
            printf("yes\n"); 
        } else
        { 
            printf("no\n"); 
        } 
    } 
    return 0;
}