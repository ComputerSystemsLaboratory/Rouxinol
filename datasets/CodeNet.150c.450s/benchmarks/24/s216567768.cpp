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
    while(1){
        int n,m;
        cin >> n >> m;
        if(n==0 && m==0) break;
        vector<P> pd(n);
        rep(i,n) cin >> pd[i].second >> pd[i].first;
        sort(pd.begin(),pd.end(),greater<P>());
        int ans = 0;
        rep(i,n){
            if(pd[i].second <= m) m -= pd[i].second;
            else if(m==0) ans += pd[i].first * pd[i].second;
            else{
                pd[i].second -= m;
                m = 0;
                ans += pd[i].first * pd[i].second;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

