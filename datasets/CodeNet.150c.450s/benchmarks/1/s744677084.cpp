#include <bits/stdc++.h>
using namespace std;
#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
const long long INF = 1LL << 60;
typedef pair<int, int> P;
int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    int dp[n];
    fill(dp, dp + n, 1e9);
    rep(i, n) cin >> A[i];

    rep(i, n) {
        *lower_bound(dp, dp + n, A[i]) = A[i];
    }

    cout << lower_bound(dp, dp + n, 1e9) - dp << endl;
    return 0;
}
