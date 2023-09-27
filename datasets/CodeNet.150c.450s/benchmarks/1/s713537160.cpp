#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;
using ll = long long ;
using P = pair<int,int> ;
using pll = pair<long long,long long>;
constexpr int INF = 1e9;
constexpr long long LINF = 1e17;
constexpr int MOD = 1000000007;

int main(){
    int n;cin >> n;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    vector<int> dp(n,INF);
    rep(i,n){
        *lower_bound(dp.begin(),dp.end(),a[i]) = a[i];
    }
    cout << lower_bound(dp.begin(),dp.end(),INF) - dp.begin() << endl;
}
