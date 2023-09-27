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

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n){
        cin >> a[i];
    }
    int dp[25][2010];
    rep(i, n+1){
        rep(j, 2001){
            dp[i][j] = (j == 0);
        }
    }
    REP(i, 1, n+1){
        REP(j, 1, 2001){
            if(j >= a[i-1]){
                dp[i][j] = dp[i-1][j] + dp[i-1][j-a[i-1]];
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    int q;
    cin >> q;
    rep(i, q){
        int m;
        cin >> m;
        if(dp[n][m] > 0){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }
    }
    return 0;
}
