#include <bits/stdc++.h>
using namespace std;
#define rep(i,n)for(int i=0;i<(n);i++)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

const int INF = 1001001001;

int main(){
    while(true){
        int n, k; cin >> n >> k;
        if(n==0 && k==0) break;
        vector<int> a(n);
        rep(i,n) cin >> a[i];
        vector<int> sum(n+1,0);
        rep(i,n) sum[i+1] = sum[i] + a[i];
        int ans = -INF;
        for(int i = 0; i <= n-k; ++i){
            ans = max(ans, sum[i+k] - sum[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
