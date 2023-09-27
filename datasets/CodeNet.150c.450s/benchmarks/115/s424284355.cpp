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
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
    int n;
    cin >> n;
    rep(i, 0, n) {
        memset(dp, 0, sizeof(dp));
        cin >> s >> t;
        erep(i, 0, s.size()) {
            erep(j, 0, t.size()) {
                if (s[i] == t[j]) 
                    dp[i+1][j+1] = dp[i][j] + 1;
                else
                    dp[i+1][j+1] = max(dp[i+1][j], dp[i][j+1]);
            }
        }
        cout << dp[s.size()][t.size()] << endl;
    }
    return 0;
}
