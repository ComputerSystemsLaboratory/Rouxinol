#include <bits/stdc++.h>
#define rep(i,a,n) for(int i=a;i<n;i++)
#define repr(i,a,n) for(int i=a;i>=n;i--)
#define INF 999999999
#define INF_M 2147483647
#define pb(a) push_back(a)

using namespace std;
typedef pair<int, int> pii;
typedef long long int ll;
typedef vector<pii> VP;

int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};

int main() {
    string s1,s2;
    cin >> s1 >> s2;

    int dp[1010][1010];
    rep(i,0,s1.size()+1) dp[i][0] = i;
    rep(j,0,s2.size()+1) dp[0][j] = j;

    rep(i,0,s1.size()) {
        rep(j,0,s2.size()) {
            dp[i+1][j+1] = min(dp[i][j+1], dp[i+1][j]) + 1;
            dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j] + (s1[i] != s2[j]));
        }
    }

    cout << dp[s1.size()][s2.size()] << endl;
    return 0;
}