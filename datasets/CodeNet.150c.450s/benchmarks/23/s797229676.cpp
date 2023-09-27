#include <bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<(b);i++)
#define erep(i,a,b) for(int i=a;i<=(int)(b);i++)
#define per(i,a,b) for(int i=(b)-1;i>(a);i--)
#define eper(i,a,b) for(int i=((int)(a));i>=b;i--)
#define pb push_back
#define mp make_pair
#define INF (1<<30)-1
#define MOD 1000000007
using namespace std;
typedef long long ll;
int dy[]={0, 0, 1, -1};
int dx[]={1, -1, 0, 0};
int gcd(int a,int b){return b?gcd(b,a%b):a;}

int n, dp[1000];
int main() {
 ios::sync_with_stdio ( false );
 cin.tie ( 0 );
    cin >> n;
    dp[0] = dp[1] = 1;
    erep(i, 2, n) { dp[i] = dp[i - 1] + dp[i - 2]; }
    cout << dp[n] << endl;
    return 0;
}
