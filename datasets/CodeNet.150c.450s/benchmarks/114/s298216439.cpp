#include <iostream>
#include <stack>
#define N 100
#define WHITE 0
#define GREY 1
#define BLACK 2
#define INFTY 100000
using namespace std;

int color[N];//color用来记录访问状态
int M[N][N];//M[N][N]是图的邻接矩阵表示法
int d[N],p[N];
//d[N]用来记录连接T内顶点与V-T内顶点的边中，权值最小的边的权值
//p[n]用来记录MST中顶点v的父节点
void init_color_d()
{
    for(int i = 0; i < N; i++)
    {
        color[i] = WHITE;
        d[i] = INFTY;
    }
}
int prim(int n)
{
    init_color_d();
    d[0] = 0;//起始点为0结点，距离设置为0
    p[0] = -1;
    int u;
    while(true)//访问结点为u
    {
        int mincost = INFTY;
        for(int i = 0; i < n; i++)
        {
            if(color[i]!=BLACK&&d[i]<mincost)//求最小值
            {
                mincost = d[i];
                u = i;
            }
        }
        if(mincost==INFTY)break;//这时候表示没有取到最小值，即最小生成树已经完成
        color[u] = BLACK;//因为u是最小值，那么就先标志为访问完
        for(int v = 0; v < n; v++)
        {
            if(color[v]!=BLACK&&M[u][v]!=-1)//如果v没有被选入到MST集合里面，并且此边存在
            {
                if(M[u][v]<d[v])
                {
                    d[v] = M[u][v];//d[v]记录最小值
                    p[v] = u;//记录父节点
                    color[v] = GREY;//设置为已经尝试过此结点
                }
            }
        }
    }
    int sum = 0;
    for(int i = 0;i < n;i++){
        if(p[i]!=-1)sum+=M[i][p[i]];
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <n; j++)
        {
            cin >> M[i][j];
        }
    }
    cout<<prim(n)<<endl;

    return 0;
}

