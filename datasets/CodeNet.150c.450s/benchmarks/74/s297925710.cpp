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

int gcd(int x, int y){
    int r = x % y;
    while(r != 0){
        x = y;
        y = r;
        r = x % y;
    }
    return y;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> c(m);
    rep(i, m){
        cin >> c[i];
    }
    SORT(c);
    int dp[25][50050]; //dp[i][j] i番目まででj円払うのに必要な枚数
    rep(i, m){
        dp[i][0] = 0;
    }
    rep(i, m){
        rep(j, n+1){
            if(i == 0){
                dp[i][j] = j;
            }else if(j >= c[i]){
                dp[i][j] = min(dp[i-1][j], dp[i][j-c[i]] + 1);
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[m-1][n] << endl;
    return 0;
}
