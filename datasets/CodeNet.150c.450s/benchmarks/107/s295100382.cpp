#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

const int  MOD=1000000007;
const int  INF= int(1e9);
const int  MAX =1007;
string a,b;
int n,m;
int dp[MAX][MAX];

int solve ( int n,int m) {
    if(dp[n][m] != -1) {
        return dp[n][m];
    }
    else if(m == 0) {
        return dp[n][m]=n;
    }
    else if(n == 0) {
        return dp[n][m]=m;
    }
    if (a[n-1] == b[m-1] ) {
        return dp[n][m]=solve(n-1,m-1);
    }
    dp[n][m] = 1 + min(  solve(n-1,m-1) , min ( solve(n-1,m) ,solve(n,m-1) ) );
    return dp[n][m];
}


int main()
{
    ios_base::sync_with_stdio(false);
    for(int i=0;i<MAX;i++) {
        for(int j=0;j<MAX;j++) {
            dp[i][j]=-1;
        }
    }
    cin>>a;
    cin>>b;
    n=a.size(),m=b.size();
    solve(n,m);
    cout<<dp[n][m]<<"\n";

    return 0;

}