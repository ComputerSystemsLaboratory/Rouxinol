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
    int num; cin >> num;
    rep(k,0,num) {
        string s1,s2;
        cin >> s1 >> s2;

        int dp[1001][1001]; //s1???i??????????????§???s2???j??????????????§??§???LCS????±???????????????????
        int n = s1.length();
        int m = s2.length();
        rep(i,0,m+1) dp[0][i] = 0;

        rep(i,0,n) {
            rep(j,0,m) {
                if(s1[i]==s2[j]) dp[i+1][j+1] = dp[i][j] + 1;
                else dp[i+1][j+1] = max(dp[i][j+1], dp[i+1][j]);
            }
        }
        cout << dp[n][m] << endl;
    }
    return 0;
}