#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <cstdio>
#include <cctype>
#include <queue>
#include <cmath>
#include <stack>
using namespace std;
const int inf = 0x3f3f3f3f, N = 20;

int e[N][N];
void floyd(int n)
{
    for(int k = 0; k <= n; k++)
        for(int i = 0; i <= n; i++)
            for(int j = 0; j <= n; j++)
            e[i][j] = min(e[i][k] + e[k][j], e[i][j]);
}
int main()
{
    int m;
    while(cin >> m, m) {
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++) {
            if(i == j) e[i][j] = 0;
            else e[i][j] = e[j][i] = inf;
        }
        int Max = 0;
        while(m--) {
            int x, y, l;
            scanf("%d%d%d", &x, &y, &l);
            if(x > Max) Max = x;
            if(y > Max) Max = y;
            e[x][y] = e[y][x] = l;
        }
        floyd(Max);
        int msum = inf, mp;
        int ms = 0;
        for(int i = 0; i <= Max; i++) {
            ms = 0;
            for(int j = 0; j <= Max; j++) {
                ms += e[i][j];
            }
            if(ms < msum) {
                msum = ms;
                mp = i;
            }
        }
        printf("%d %d\n", mp, msum);
    }
    return 0;
}