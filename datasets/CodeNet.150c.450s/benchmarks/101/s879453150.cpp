#include<iostream>
#include<cstring>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
#define maxn 100005
#define NIL -1

int n,m;
vector<int> G[maxn]; //邻接表
int color[maxn]; //编号（可以互相链接的两个节点编号相同）

void dfs(int r,int c) //给节点r分配编号c（深搜实现）（栈）
{
    stack<int> S;
    S.push(r);
    color[r]=c;
    while(!S.empty())
    {
        int u=S.top();S.pop(); //从栈顶取出
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(color[v]==NIL) //如果该节点无编号
            {
                color[v]=c; //给其编号
                S.push(v); //压入栈
            }
        }
    }
}

void dfs_(int r,int c) //给节点r分配编号c（深搜实现）（递归）
{
    color[r]=c;
    for(int i=0;i<G[r].size();i++) //注意这里代码于上面的不同
    {
        int v=G[r][i];
        if(color[v]==NIL)
            {
                color[v]=c;
                dfs_(v,c);
            }
    }
}

void bfs(int r,int c) //给节点r分配编号c（广搜实现）
{
    queue<int> S;
    S.push(r);
    color[r]=c;
    while(!S.empty())
    {
        int u=S.front();S.pop(); //从队首取出
        for(int i=0;i<G[u].size();i++)
        {
            int v=G[u][i];
            if(color[v]==NIL)
            {
                color[v]=c;
                S.push(v); //加入队列中
            }
        }
    }
}

void assigncolor()
{
    int id=1;
    memset(color,NIL,sizeof(color)); //这里要记得初始化
    for(int u=0;u<n;u++)
        if(color[u]==NIL)
            dfs_(u,id++); //这里选取了广搜的方式给各个节点编号
}

int main()
{
    int s,t,q;
    cin>>n>>m;
    while(m--)
    {
        cin>>s>>t;
        G[s].push_back(t); //从顶点s向t画边
        G[t].push_back(s); //反过来连边
    }
    assigncolor();
    cin>>q;
    while(q--)
    {
        cin>>s>>t;
        if(color[s]==color[t]) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
