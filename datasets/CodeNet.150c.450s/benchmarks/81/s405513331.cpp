#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <numeric>
#include <string.h>
#include <cmath>
#include <queue>
#include <string>
#include <map>
#include <vector>
#define N 211
using namespace std;
typedef long long ll;
int a[N][N];
int main()
{
    int inf = 99999999;
    int m, n;
    while (~scanf("%d",&m))//floyd
    {
        if (m == 0)  return 0;
        int i, j, k;
        for (i=0; i<=11; i++)
            for (j=i; j<=11; j++)
                if (i == j)  a[i][j] = 0;
                else  a[i][j] = a[j][i] = inf;

        n = -1;
        for (i=0; i<m; i++)
        {
            int q, w, e;
            scanf("%d%d%d",&q,&w,&e);
            n = max(n,q);
            n = max(n,w);
            if (e < a[q][w])  a[q][w] = a[w][q] = e;
        }

        for (k=0; k<=n; k++)
            for (i=0; i<=n; i++)
                for (j=0; j<=n; j++)
                    a[i][j] = min(a[i][j],a[i][k]+a[k][j]);

        int ans , sum = inf;
        for (i=0; i<=n; i++)
        {
            int temp = 0;
            for (j=0; j<=n; j++)
                temp += a[i][j];
            if (temp < sum)
            {
                sum = temp;
                ans = i;
            }
        }
        cout << ans << " " << sum << endl;
    }
    return 0;
}