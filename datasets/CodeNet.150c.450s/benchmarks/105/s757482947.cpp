#include <bits/stdc++.h>
#define be(v) (v).begin(),(v).end()
#define pb(q) push_back(q)
typedef long long ll;
using namespace std;
const ll mod=1000000007, INF=(1LL<<60);
#define doublecout(a) cout<<fixed<<setprecision(10)<<a<<endl;
void solve(){
	ll n;
	cin >> n;
	vector<ll> a(n), dp(61, 0);
	for(int i=0;i<n;i++) cin >> a[i];
	string s;
    cin >> s;
    for(int i=n-1;i>=0;i--){
    	for(int j=60;j>=0;j--) if(a[i] >> j & 1){
    	    if(s[i] == '1' || dp[j] >> j & 1) a[i] ^= dp[j];
    	    else dp[j] = a[i], j = -1;
        }
        if(s[i] == '1' && a[i]){
        	cout << 1 << endl;
        	return;
        }
    }
    cout << 0 << endl;
    return;
}
int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
