#include <iostream>
#include <queue>
#include <cstring>
#include <utility>

using namespace std;

char a[1003][1003];
int r, c;

int bfs (int n)
{
    bool done[1003][1003];
    int cost[1003][1003];
    queue<pair<int, int>> que;
    memset(done, false, sizeof(done));
    done[r][c]=true;
    cost[r][c]=0;
    que.push({r,c});
    while (1)
    {
        r=que.front().first, c=que.front().second;
        que.pop();
        if (!done[r][c+1])
        {
            done[r][c+1]=true;
            if (a[r][c+1]-'0'==n) { c++; cost[r][c]=cost[r][c-1]+1; return cost[r][c]; }
            if (a[r][c+1]!='X') { cost[r][c+1]=cost[r][c]+1; que.push({r, c+1}); }
        }
        if (!done[r][c-1])
        {
            done[r][c-1]=true;
            if (a[r][c-1]-'0'==n) { c--; cost[r][c]=cost[r][c+1]+1; return cost[r][c]; }
            if (a[r][c-1]!='X') { cost[r][c-1]=cost[r][c]+1; que.push({r, c-1}); }
        }
        if (!done[r+1][c])
        {
            done[r+1][c]=true;
            if (a[r+1][c]-'0'==n) { r++; cost[r][c]=cost[r-1][c]+1; return cost[r][c]; }
            if (a[r+1][c]!='X') { cost[r+1][c]=cost[r][c]+1; que.push({r+1, c}); }
        }
        if (!done[r-1][c])
        {
            done[r-1][c]=true;
            if (a[r-1][c]-'0'==n) {r--; cost[r][c]=cost[r+1][c]+1; return cost[r][c]; }
            if (a[r-1][c]!='X') { cost[r-1][c]=cost[r][c]+1; que.push({r-1, c}); }
        }
    }
}

int main()
{
    int h, w, n, ans=0;
    cin>>h>>w>>n;
    memset(a, 'X', sizeof(a));
    for (int i=1; i<=h; i++) for (int j=1; j<=w; j++) { cin>>a[i][j]; if (a[i][j]=='S') { r=i; c=j; } }
    for (int i=1; i<=n; i++) ans+=bfs(i);
    cout<<ans<<'\n';
    return 0;
}

