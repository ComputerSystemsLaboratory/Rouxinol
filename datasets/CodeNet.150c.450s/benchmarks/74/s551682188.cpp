#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repr(i,a,n) for(int i=a;i>=n;i--)
#define INF 999999999
#define pb(a) push_back(a)

using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;
typedef vector<pii> VP;

int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};

int main() {
    int n,m;
    cin >> n >> m;

    vector<int> c(m);
    rep(i,0,m) cin >> c[i];

    int dp[21][50001];
    rep(i,0,m+1) {
        rep(j,0,n+1) {
            dp[i][j] = INF;
        }
    }
    rep(i,0,m+1) dp[i][0] = 0;

    rep(i,0,m) {
        rep(j,0,n+1) {
            if(c[i] > j) dp[i+1][j] = dp[i][j];
            else dp[i+1][j] = min(dp[i][j], dp[i+1][j - c[i]] + 1);
        }
    }

    //rep(i,0,m) cout << c[i] << endl;

    /*rep(i,0,m+1) {
        rep(j,0,n+1) {
            printf("%d ",dp[i][j]);
        }
        cout << endl;
    }*/


    cout << dp[m][n] << endl;
    return 0;
}