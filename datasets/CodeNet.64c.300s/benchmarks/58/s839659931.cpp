#include <iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<string>
#include<cstdlib>
#include<stack>
#include<queue>
#include <map>
#include<cmath>
#include<vector>
#define MAX_N 1000000
#define INF 1000000
using namespace std;


char a[100][100];
int sum;
int n, m;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
void dfs(int x, int y, char c)
{
    a[x][y] = '.';
    for (int i = 0; i < 4; i++)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (xx >= 0 && xx < n && yy >= 0 && yy < m && a[xx][yy] == c)
            dfs(xx, yy, c);
    }
}
int main()
{
    while (~scanf("%d%d%*c", &n, &m) && n && m)
    {
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%s", a[i]);
            getchar();
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] != '.')
                {
                    dfs(i, j, a[i][j]);
                    sum++;
                }
            }
        }
        printf("%d\n", sum);
    }
}