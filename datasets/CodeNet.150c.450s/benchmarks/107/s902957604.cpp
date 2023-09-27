#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<(b);++i)
#define erep(i,a,b) for(int i=a;i<=(int)(b);++i)
#define per(i,a,b) for(int i=(b);i>(a);--i)
#define eper(i,a,b) for(int i=((int)(a));i>=b;--i)
#define pb push_back
#define mp make_pair
#define INF (1<<30)-1
#define MOD 1000000007
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
typedef pair<int,int> Pii;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }
int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};
int gcd(int a,int b){return b?gcd(b,a%b):a;}
int lcm(int a,int b){return a/gcd(a, b)*b;}

string s, t;
int dp[1010][1010];
int n, m;
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
    cin >> s >> t;
    n = s.size(), m = t.size();
    erep(i, 0, n) erep(j, 0, m) dp[i][j] = INF;
    erep(i, 0, n) dp[i][0] = i;
    erep(i, 0, m) dp[0][i] = i;
    erep(i, 1, n) {
        erep(j, 1, m) {
            int cost = s[i-1] == t[j-1] ? 0 : 1;
            dp[i][j] = min(dp[i-1][j-1] + cost, min(dp[i][j-1] + 1, dp[i-1][j] + 1));
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}
