#include <bits/stdc++.h>

using namespace std;

int a[110][110];
int vis[110];
int n, x, y, z;
int main()
{
    while(1)
    {
        scanf("%d", &n);
        if (n == 0) break;
        memset(a, 0, sizeof(a));
        for(int i=0; i<=9; i++)
            for(int j=0; j<=9; j++)
                a[i][j] = 100000;

        for(int i=0; i<=9; i++)
            a[i][i] = 0;
        memset(vis, 0, sizeof(vis));
        for(int i=1; i<=n; i++)
        {
            scanf("%d%d%d", &x, &y, &z);
            a[x][y] = min(a[x][y], z);
            a[y][x] = min(a[y][x], z);
            vis[x] = 1; vis[y] = 1;
        }

        for(int i=0; i<=9; i++)
            for(int j=0; j<=9; j++)
                for(int k=0; k<=9; k++)
        {
            if (a[j][i] + a[i][k] < a[j][k])
                a[j][k] = a[j][i] + a[i][k];
        }


        int ans1 = -1;
        int ans2 = 0;
        for(int i=0; i<=9; i++)
        {
            if (vis[i] == 0) continue;
            int sum = 0;
            for(int j=0; j<=9; j++)
                sum += a[i][j] * vis[j];
            if (sum < ans2 || ans1 == -1) {ans1 = i; ans2 = sum;}
        }
        cout<<ans1<<' '<<ans2<<endl;
    }
}

