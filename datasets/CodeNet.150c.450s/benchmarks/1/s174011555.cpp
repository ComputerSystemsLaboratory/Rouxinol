#include <cmath>
#include <iostream>
#include <vector>
#include <queue>
#include <deque>
#include <map>
#include <set>
#include <stack>
#include <tuple>
#include <bitset>
#include <algorithm>
#include <utility>
#include <iomanip>

#define int long long int
#define rep(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef pair<int, int> P;

const int INF = 1e15;
const int MOD = 1e9+7;

signed main(){
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<int> dp(n+1, INF);
    dp[1] = a[0];
    for(int i = 1; i < n; i++){
        int l = 0;
        int r = n;
        while(r - l > 1){
            int m = (r + l) / 2;
            if(dp[m] < a[i]){
                l = m;
            }else{
                r = m;
            }
        }
        dp[l+1] = a[i];
    }
    int ans;
    for(int i = 1; i <= n; i++){
        if(dp[i] != INF){
            ans = i;
        }
    }
    cout << ans << endl;

    return 0;
}

