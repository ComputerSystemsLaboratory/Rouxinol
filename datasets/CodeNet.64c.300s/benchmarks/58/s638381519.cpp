#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <cstring>
#include <iostream>
#include<algorithm>
#include <queue>
#include <map>
#include <vector>
#include <cmath>
#define INF 0x3f3f3f3f
using namespace std;
#define N 105
#define LL long long

char Map[N][N];
int n, m;

int tab[4][2]=
{
    {0, 1}, {0, -1}, {-1, 0}, {1, 0},
};

void dfs(int x, int y, char ch)
{
    int X, Y, i;
    if(Map[x][y]==ch)
    {
        Map[x][y]='.';
    }
    for(i=0;i<4;i++)
    {
        X=x+tab[i][0];
        Y=y+tab[i][1];
        if(X>=0&&X<n&&Y>=0&&Y<m&&Map[X][Y]==ch)
        {
                dfs(X, Y, ch);
        }
    }
}

int main()
{
    int i, j, sum;
    char ch;
    while(scanf("%d%d", &n, &m), n!=0&&m!=0)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%s", Map[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(Map[i][j]!='.')
                {
                    sum++;
                    ch=Map[i][j];
                    dfs(i, j, ch);
                }
            }
        }
        printf("%d\n", sum);
    }
    return 0;
}