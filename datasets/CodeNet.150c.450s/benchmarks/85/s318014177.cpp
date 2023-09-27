#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n);++i)
using namespace std;
template <class _t> inline bool chmax (_t& a,_t b){if(a<b){a=b;return true;}return false;} template <class _t> inline bool chmin (_t& a,_t b){if(a>b){a=b;return true;}return false;}

const long long inf = 1ll << 60;
const long long mod = 1000000007;

int dx[4] = {1,0,-1,0};int dy[4] = {0,-1,0,1};

int main() {
    int n;cin >> n;
    vector<int> p(n+1,0);
    for(int i=0;i<n;i++){
	cin >> p[i] >> p[i+1];
	//p[0] M1の行 p[1] M１の列
    }
    vector<vector<int> > dp(n+1,vector<int>(n+1,(1<<21)));
    rep(i,n+1) dp[i][i] = 0;
    for(int t = 2;t<=n;t++){
	for(int i=1;i<=n-t+1;i++){
	    int j=i+t-1;
	    for(int k=i;k<=j-1;k++){
		chmin(dp[i][j],dp[i][k]+dp[k+1][j]+p[i-1]*p[k]*p[j]);
	    }
	}
    }
    /*
    for(int i=0;i<=n;i++){
	for(int j=0;j<=n;j++){
	    cout << dp[i][j] << " ";
	}
	cout << endl;
    }
    */
    cout << dp[1][n] << endl;
    return 0;
}

