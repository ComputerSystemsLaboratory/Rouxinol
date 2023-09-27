#include <cstdio>
#include <cstring>
#include<iostream>
#include<queue>
#include<stack>
#include<cmath>
#include <map>
#include <algorithm>
using namespace std;
map<string, string>mp;
vector<vector<int> >G;

const int INF=0x3f3f3f3f;
const int maxn=1100;
int maps[maxn][maxn];
int n, m;


int main()
{
    while(scanf("%d", &n), n)
    {
        m=0;
        memset(maps, INF, sizeof(maps));
        for(int i=0; i<n; i++)
        {
            int u, v, w;
            scanf("%d %d %d", &u, &v, &w);
            m=max(m, max(u, v));
            maps[u][v]=maps[v][u]=w;
        }

        for(int k=0; k<=m; k++)
        {
            for(int i=0; i<=m; i++)
            {
                for(int j=0; j<=m; j++)
                    maps[i][j]=min(maps[i][j], maps[i][k]+maps[k][j]);
            }
        }

        int sum=INF, index;
        for(int i=0; i<=m; i++)
        {
            int ans=0;

            for(int j=0; j<=m; j++)
                if(i!=j)
                    ans+=maps[i][j];
            if(sum>ans)
            {
                sum=ans;
                index=i;
            }
        }
        printf("%d %d\n", index, sum);
    }
    return 0;
}