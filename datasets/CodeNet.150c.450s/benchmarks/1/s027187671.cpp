#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
const int INF = 2000000000;
using namespace std;

const int MAX_N = 100005;
int dp[MAX_N];

int solve(int n, int a[MAX_N]){
    fill(dp, dp + n, INF);
    rep(i,n){
        *lower_bound(dp, dp + n, a[i]) = a[i];
    }
    return (lower_bound(dp, dp + n, INF) - dp);
}

int main(){
    int n, a[MAX_N];
    cin >> n;
    rep(i,n){ cin >> a[i]; }

    cout << solve(n,a) << endl;
}