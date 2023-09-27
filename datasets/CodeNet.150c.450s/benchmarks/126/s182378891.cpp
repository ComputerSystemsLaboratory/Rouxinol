#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<cstring>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
#define all(n) n.begin(),n.end()

const int MAXN = 41;
int dp[MAXN][MAXN];
bool koji[MAXN][MAXN];

int a, b, n;

int solve(int x, int y)
{
    if(dp[x][y] != -1) return dp[x][y];

    if(koji[x][y]) return 0;
    int ans = 0;
    if(x != 0) ans += solve(x-1, y);
    if(y != 0) ans += solve(x, y-1);

    dp[x][y] = ans;
    return ans;
}

int main()
{
    while(cin >> a >> b && a)
    {
        int x, y;
        memset(koji, false, sizeof(koji));
        memset(dp, -1, sizeof(dp));
        //rep(i,MAXN)rep(j,MAXN)dp[i][j] = -1;

        cin >> n;
        REP(n){ cin >> x >> y; x--;y--; koji[x][y] = true;}

        dp[0][0] = 1;
        cout << solve(a-1, b-1) << endl;
    }
    
    return 0;
}