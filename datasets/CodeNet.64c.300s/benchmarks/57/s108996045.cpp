#include <iostream>
#include <algorithm>

using namespace std;

int a[11][10001], r, c, flag[12];

int dfs (int depth, int f)
{
    if (depth<r)
    {
        flag[depth]=f;
        return max(dfs(depth+1, 0), dfs(depth+1, 1));
    }
    flag[depth]=f;
    int best=0, sum, cpy[11][10001];
    for (int i=1; i<=r; i++)
    {
        if (flag[i]==1)
        {
            for (int j=1; j<=c; j++)
            {
                if (a[i][j]==0) cpy[i][j]=1;
                else cpy[i][j]=0;
            }
        }
        else for (int j=1; j<=c; j++) cpy[i][j]=a[i][j];
    }
    for (int i=1; i<=c; i++)
    {
        sum=0;
        for (int j=1; j<=r; j++)
        {
            if (cpy[j][i]==1) sum++;
        }
        best+=max(sum, r-sum);
    }
    return best;
}

int main()
{
    while (1)
    {
        cin>>r>>c;
        if (r==0 && c==0) break;
        for (int i=1; i<=r; i++) for (int j=1; j<=c; j++) cin>>a[i][j];
        cout<<dfs(0,0)<<'\n';
    }
    return 0;
}

