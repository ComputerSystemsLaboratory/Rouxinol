#include <bits/stdc++.h>
#define rep(i,n) for(ll i=0;i<(n);++i)
#define all(a) (a).begin(),(a).end()
using namespace std;
using Graph = vector<vector<int>>;
typedef pair<double,double> P;
typedef long long ll;

int main(){

    while(1){
        int n, m; cin >> n >> m;
        if(n == 0 && m == 0) return 0;
        vector<P> a(n);

        rep(i,n){
            cin >> a[i].second >> a[i].first;
        }

        sort(all(a));
        reverse(all(a));

        ll ans = 0.0;

        ll id = 0;
        while(m > 0 && id < n){
            
            if(a[id].second<= m){
                m -= a[id].second;
                a[id].second = 0;
                id++;
                continue;
            }
            else{
                a[id].second -= m;
                m = 0;
                break;
            }

        }

        rep(i,n){
            ans += a[i].first * a[i].second;
        }

        cout << ans << endl;

    }
}
