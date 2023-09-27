#include <iostream>
#include <cstdio>
using namespace std;

const int maxn = 100 + 5;
const int maxm = 10000 + 5;

int v[maxn],w[maxn];
//int f[maxn][maxm];
int f[maxm];

int main()
{
    int N,W;
    scanf("%d%d",&N,&W);
    for(int i = 1;i <= N; i++)scanf("%d%d",&v[i],&w[i]);
    //二?
    /*for(int i = 1;i <= N; i++)
    {
        for(int j = 0;j <= W; j++)
        {
            if(j >= w[i])f[i][j] = max(f[i-1][j],f[i-1][j-w[i]] + v[i]);
            else f[i][j] = f[i-1][j];
        }
    }
    printf("%d\n",f[N][W]);*/
    //一?
    for(int i = 1;i <= N; i++)
    {
        for(int j = W;j >= w[i]; j--)
        {
            f[j] = max(f[j],f[j-w[i]] + v[i]);
        }
    }
    printf("%d\n",f[W]);
}