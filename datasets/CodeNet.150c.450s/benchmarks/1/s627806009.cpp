#include<algorithm>
#include<climits>
#include<cmath>
#include<iomanip>
#include<iostream>
#include<list>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<utility>
#include<vector>

#define lint long long
#define REP(i, x, n) for(int i = x ; i < n ; i++)
#define rep(i, n) REP(i, 0, n)
#define repr(i, n) for(int i = n - 1 ; i >= 0 ; i--)
#define SORT(c) sort((c).begin(), (c).end())
#define SORT_INV(c) sort((c).begin(), (c).end(), greater<int>())
#define IINF INT_MAX
#define LLINF LLONG_MAX

using namespace std;

const int INF = 1e9 + 10;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n){
        cin >> a[i];
    }
    int dp[100010];
    rep(i, n+1){
        dp[i] = INF;
    }
    rep(i, n){
        *lower_bound(dp, dp+n, a[i]) = a[i];
    }
    cout << lower_bound(dp, dp+n, INF) - dp << endl;
    return 0;
}
