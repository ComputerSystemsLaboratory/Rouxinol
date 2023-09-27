#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

const int  MOD=1000000007;
const int  INF= int(1e9);
const int  MAX=2000;
int dp[10007][300],n,capacity,value[MAX],wt[MAX];

int solve(int w , int n) {
    if(dp[w][n] != -1 ) {
        return dp[w][n];
    }
    if(w < 0 || n<0) {
        return dp[w][n]=0;
    }
    if(wt[n] > w ) {
        return dp[w][n] = solve(w,n-1);
    } else {
        return dp[w][n] = max(solve(w-wt[n],n-1)+value[n],solve(w,n-1));
    }
    return dp[w][n];
}

int main()
{
	ios_base::sync_with_stdio(false);
    for(int i=0;i<10007;i++) {
        for(int j=0;j<300;j++) {
            dp[i][j]=-1;
        }
    }
    cin>>n>>capacity;
    for(int i=1;i<=n;i++) {
        cin>>value[i]>>wt[i];
    }
    cout<<solve(capacity,n)<<"\n";
    

	return 0;

}