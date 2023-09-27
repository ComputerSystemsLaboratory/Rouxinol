#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

const int  MOD=1000000007;
const int  INF= int(1e9);
const int  MAX = 1000000;
int dp[MAX],n,m,coin[50];



int main()
{
	ios_base::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=0;i<MAX;i++) {
        dp[i]=INF;
    }
    for(int i=0;i<m;i++) {
        cin>>coin[i];
        dp[coin[i]]=1;
    }
    for(int i=1;i<=n;i++) {
        for(int j=0;j<m;j++) {
            if(i-coin[j] >= 0)
            dp[i] = min(dp[i-coin[j]]+1,dp[i]);

        }
    }
    cout<<dp[n]<<"\n";




	return 0;

}