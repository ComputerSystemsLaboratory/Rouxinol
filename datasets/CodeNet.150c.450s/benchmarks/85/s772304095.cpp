#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <cmath>
#include <set>
#include <algorithm>

typedef long long ll;
const ll MOD = 1e9 + 7;
const long long INF = 1LL<<60;
const double PI=3.14159265358979323846;
const int NMAX=100005;
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<ll> r(n),c(n);
    for(int i = 0; i < n; i++){
        cin >> r[i] >> c[i];
    }
    ll dp[n+1][n+1];
    pair<ll,ll> rc[n+1][n+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            dp[i][j] = INF;
        }
    }

    for(int l = 1; l <= n; l++){
        for(int i = 0; i < n; i++){
            int j = i+l;
            if(j > n) break;
            if(i+1 == j){
                dp[i][j] = 0;
                rc[i][j] = make_pair(r[i],c[i]);
            }
            for(int mid = i; mid <= j; mid++){
                ll tmp = dp[i][j];
                dp[i][j] = min(dp[i][j], dp[i][mid]+dp[mid][j]+rc[i][mid].first*rc[mid][j].second*rc[i][mid].second);
                if(dp[i][j] != tmp){
                    rc[i][j] = make_pair(rc[i][mid].first,rc[mid][j].second);
                }
            }
        }
    }

    cout << dp[0][n] << endl;

    return 0;
}
